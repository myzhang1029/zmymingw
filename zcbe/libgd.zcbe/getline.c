/*
 * getline.c - getline() naive implementation.
 *
 * Zhang Maiyun <myzhang1029@hotmail.com>
 * Released into the Public Domain
 */
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
static ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
    size_t allocated, used = 0;
    char *buf, ch;

    if (lineptr == NULL || n == NULL)
    {
        errno = EINVAL;
        return -1;
    }
    /* We should make sure allocated is never zero because 0<<1 == 0 */
    if (*lineptr == NULL || *n == 0)
    {
        if (*lineptr != NULL)
            /* Brought here because *lineptr is a zero allocation */
            free(*lineptr);
        allocated = 32;
        buf = malloc(allocated);
        if (buf == NULL)
            /* errno set by malloc() */
            return -1;
    }
    else
    {
        allocated = *n;
        buf = *lineptr;
    }
    do
    {
        if (used + 1 >= allocated)
        {
            buf = realloc(buf, (allocated <<= 1));
            if (buf == NULL)
                /* XXX: Should I free() buf? */
                return -1;
        }
        ch = fgetc(stream);
        buf[used++] = ch;
    }
    while (ch != '\n');
    /* used incremented */
    buf[used] = 0;
    /* In case realloc() changed this */
    *lineptr = buf;
    *n = used;
    return (ssize_t) used;
}
#endif
