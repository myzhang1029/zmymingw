/*
 * definitions for dc's "register" declarations
 *
 * Copyright (C) 1994, 2000, 2008, 2017
 * Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/* determine how many register stacks there are */
#ifndef DC_REGCOUNT
# include <limits.h>	/* UCHAR_MAX */
# define DC_REGCOUNT (UCHAR_MAX+1)
#endif

/* efficiency hack for masking arbitrary integers to 0..(DC_REGCOUNT-1) */
#if (DC_REGCOUNT & (DC_REGCOUNT-1)) == 0	/* DC_REGCOUNT is power of 2 */
# define regmap(r)	((r) & (DC_REGCOUNT-1))
#else
# define regmap(r)	((r) % DC_REGCOUNT)
#endif
