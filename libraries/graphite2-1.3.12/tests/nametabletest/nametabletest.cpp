/*  GRAPHITE2 LICENSING

    Copyright 2010, SIL International
    All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should also have received a copy of the GNU Lesser General Public
    License along with this library in the file named "LICENSE".
    If not, write to the Free Software Foundation, 51 Franklin Street,
    Suite 500, Boston, MA 02110-1335, USA or visit their web page on the
    internet at http://www.fsf.org/licenses/lgpl.html.
*/
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <graphite2/Types.h>
#include "inc/Main.h"
#include "inc/Endian.h"
#include "inc/TtfTypes.h"
#include "inc/NameTable.h"

#pragma pack(push, 1)

using namespace graphite2;

struct NameTestA
{
    TtfUtil::Sfnt::FontNames m_nameHeader;
    TtfUtil::Sfnt::NameRecord m_records[5];
    uint8 m_textData[27];
};

struct NameTestB
{
    TtfUtil::Sfnt::FontNames m_nameHeader;
    TtfUtil::Sfnt::NameRecord m_records[7];
    uint16 m_langTagCount;
    TtfUtil::Sfnt::LangTagRecord m_languages[2];
    uint8 m_textData[59];
};

NameTestA testA = {
    {0, 6, (5 * sizeof(TtfUtil::Sfnt::NameRecord)) +
        sizeof(TtfUtil::Sfnt::FontNames), {{0, 0, 0, 1, 1, 0}}},
    {
        {3, 1, 0x409, 1, 4, 1},
        {3, 1, 0x409, 7, 6, 5},
        {3, 1, 0x455, 7, 4, 11},
        {3, 1, 0x809, 1, 4, 15},
        {3, 1, 0x809, 7, 8, 19}
    },
    {0x41,
     0,0x41,0,0x61,
     0,0x41,0,0x42,0,0x43,
     0x10,0x00,0x10,0x01,
     0,0x61,0,0x61,
     0,0x61,0,0x62,0,0x63,0,0x64}
};

NameTestB testB = {
    {1, 8, (7 * sizeof(TtfUtil::Sfnt::NameRecord)) +
        sizeof(TtfUtil::Sfnt::FontNames) +
        2 + 2 * sizeof(TtfUtil::Sfnt::LangTagRecord),
        {{0, 0, 0, 1, 1, 0}}},
    {
        {3, 1, 0x409, 1, 4, 1},
        {3, 1, 0x409, 7, 6, 5},
        {3, 1, 0x455, 7, 4, 11},
        {3, 1, 0x809, 1, 4, 15},
        {3, 1, 0x809, 7, 8, 19},
        {3, 1, 0x8000, 7, 6, 27},
        {3, 1, 0x8001, 7, 2, 33}
    },
    2,
    {
        {12,35},{12,47}
    },
    {0x41,
     0,0x41,0,0x61,
     0,0x41,0,0x42,0,0x43,
     0x10,0x00,0x10,0x01,
     0,0x61,0,0x61,
     0,0x61,0,0x62,0,0x63,0,0x64,
     0x10,0x00,0x10,0x62,0x10,0x64,
     0x10,0x5c,
     0,0x6b,0,0x73,0,0x77,0,0x2d,0,0x4d,0,0x4d,
     0,0x6d,0,0x6e,0,0x77,0,0x2d,0,0x4d,0,0x4d
    }
};

#pragma pack(pop)

void testName(void * data, size_t length, uint16 langId,
              uint16 actualLang, uint16 nameId, const char * utf8Text)
{
    NameTable name(data, length);
    uint16 lang = langId;
    uint32 strLen = 0;
    char * n = reinterpret_cast<char*>(name.getName(lang, nameId, gr_utf8, strLen));
    if ((n == NULL) || (strncmp(n, utf8Text, strLen) != 0))
    {
        fprintf(stderr, "name=%s expected=%s\n", n, utf8Text);
        free(n);
        exit(1);
    }
    free(n);
    if (lang != actualLang)
    {
        fprintf(stderr, "lang=%x actual=%x\n", lang, actualLang);
        exit(1);
    }
}

void testLangId(void * data, size_t length, const char * id, uint16 expected)
{
    NameTable table(data, length);
    uint16 lId = table.getLanguageId(id);
    if (lId != expected)
    {
        fprintf(stderr, "%s lang id: %d expected: %d\n", id, lId, expected);
    }
}

template <class T> T * toBigEndian(T & table)
{
    T * bigEndian = gralloc<T>(1);
    bigEndian->m_nameHeader.format = be::swap<uint16>(table.m_nameHeader.format);
    bigEndian->m_nameHeader.count = be::swap<uint16>(table.m_nameHeader.count);
    bigEndian->m_nameHeader.string_offset = be::swap<uint16>(table.m_nameHeader.string_offset);

    for (uint16 i = 0; i < table.m_nameHeader.count; i++)
    {
        bigEndian->m_records[i].platform_id = be::swap<uint16>(table.m_records[i].platform_id);
        bigEndian->m_records[i].platform_specific_id = be::swap<uint16>(table.m_records[i].platform_specific_id);
        bigEndian->m_records[i].language_id = be::swap<uint16>(table.m_records[i].language_id);
        bigEndian->m_records[i].name_id = be::swap<uint16>(table.m_records[i].name_id);
        bigEndian->m_records[i].length = be::swap<uint16>(table.m_records[i].length);
        bigEndian->m_records[i].offset = be::swap<uint16>(table.m_records[i].offset);
    }

    bigEndian->m_nameHeader.name_record[0].platform_id = be::swap<uint16>(table.m_nameHeader.name_record[0].platform_id);
    bigEndian->m_nameHeader.name_record[0].platform_specific_id = be::swap<uint16>(table.m_nameHeader.name_record[0].platform_specific_id);
    bigEndian->m_nameHeader.name_record[0].language_id = be::swap<uint16>(table.m_nameHeader.name_record[0].language_id);
    bigEndian->m_nameHeader.name_record[0].name_id = be::swap<uint16>(table.m_nameHeader.name_record[0].name_id);
    bigEndian->m_nameHeader.name_record[0].length = be::swap<uint16>(table.m_nameHeader.name_record[0].length);
    bigEndian->m_nameHeader.name_record[0].offset = be::swap<uint16>(table.m_nameHeader.name_record[0].offset);

    memcpy(bigEndian->m_textData, table.m_textData, sizeof(table.m_textData) );
    return bigEndian;
}

template <class T> T * toBigEndian1(T & table)
{
    T * bigEndian = toBigEndian<T>(table);
    bigEndian->m_langTagCount = be::swap<uint16>(table.m_langTagCount);
    for (size_t i = 0; i < table.m_langTagCount; i++)
    {
        bigEndian->m_languages[i] = be::swap<uint16>(table.m_languages[i]);
        bigEndian->m_languages[i] = be::swap<uint16>(table.m_languages[i]);
    }
}

int main(int, char **)
{
    struct NameTestA* testAData = toBigEndian<struct NameTestA>(testA);
    testName(testAData, sizeof(NameTestA), 0x409, 0x409, 1, "Aa");
    testName(testAData, sizeof(NameTestA), 0x809, 0x809, 1, "aa");
    testName(testAData, sizeof(NameTestA), 0x455, 0x409, 1, "Aa");

    testName(testAData, sizeof(NameTestA), 0x409, 0x409, 7, "ABC");
    testName(testAData, sizeof(NameTestA), 0x809, 0x809, 7, "abcd");
    testName(testAData, sizeof(NameTestA), 0x455, 0x455, 7, "ကခ");

    testLangId(testAData, sizeof(NameTestA), "en-US", 0x409);
    testLangId(testAData, sizeof(NameTestA), "en", 0x409);
    testLangId(testAData, sizeof(NameTestA), "en-GB", 0x809);
    testLangId(testAData, sizeof(NameTestA), "en-Latn-GB", 0x809);
    testLangId(testAData, sizeof(NameTestA), "en-Latn-GB-Cockney", 0x809);
    testLangId(testAData, sizeof(NameTestA), "my-MM", 0x455);
    testLangId(testAData, sizeof(NameTestA), "my-Mymr", 0x455);
    testLangId(testAData, sizeof(NameTestA), "my-Mymr-MM", 0x455);
    testLangId(testAData, sizeof(NameTestA), "en-GB-Cockney", 0x809);
    free(testAData);

    struct NameTestB* testBData = toBigEndian<struct NameTestB>(testB);
    testLangId(testBData, sizeof(NameTestB), "en-US", 0x409);
    testLangId(testBData, sizeof(NameTestB), "en-GB", 0x809);
    testLangId(testBData, sizeof(NameTestB), "ksw-MM", 0x8000);
    testLangId(testBData, sizeof(NameTestB), "mnw-MM", 0x8001);
    testName(testBData, sizeof(NameTestB), 0x809, 0x809, 7, "abcd");
    testName(testBData, sizeof(NameTestB), 0x455, 0x455, 7, "ကခ");
    testName(testBData, sizeof(NameTestB), 0x8000, 0x8000, 7, "ကၢၤ");
    testName(testBData, sizeof(NameTestB), 0x8001, 0x8001, 7, "ၜ");
    testName(testBData, sizeof(NameTestB), 0x8002, 0x409, 1, "Aa");
    free(testBData);

    return 0;
}
