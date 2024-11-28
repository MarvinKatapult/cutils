/**
 * Copyright (c) 2024 Marvin Katapult
 * 
 * Permission is hereby granted, free of charge, to any person 
 * obtaining a copy of this software and associated 
 * documentation files (the "Software"), to deal in the 
 * Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, 
 * and to permit persons to whom the Software is furnished to 
 * do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall 
 * be included in all copies or substantial portions of the 
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY 
 * KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE 
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS 
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR 
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __CDEFS_H__
#define __CDEFS_H__

#include <stdbool.h>

typedef signed char			i8;
typedef unsigned char		u8;
typedef signed short int	i16;
typedef unsigned short int	u16;
typedef signed int			i32;
typedef unsigned int		u32;

#if __WORDSIZE == 64
	typedef signed long int     i64;
	typedef unsigned long int   u64;
#endif

#ifndef NULL
	#define NULL 0
#endif // NULL

#ifndef true 
	#ifndef __cplusplus
		typedef u8		bool;
		#define true	1;
		#define false	1;
	#endif // __cplusplus
#endif // true

#endif // __CDEFS_H__
