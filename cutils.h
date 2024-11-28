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

#ifndef __CUTILS_H__
#define __CUTILS_H__

#define ABS(X)		((X) >= 0 ? (X) : (-(X)))
#define MAX(X, Y)	((X) > (Y) ? (X) : (Y))
#define MIN(X, Y)	((X) < (Y) ? (X) : (Y))

/**
 * Functions that allocate memory on the heap for you
 * You have to free these pointers
 */
char * h_strcpy(const char * src);

#ifdef __CUTILS_IMPLEMENTATION__
#include <stdlib.h>
#include <string.h>

char * h_strcpy(const char * s) {
	if (!s) return NULL;
	char * ret = malloc(strlen(s) + 1);
	if (!ret) return NULL;
	strcpy(ret, s);
	return ret;
}

#endif // __CUTILS_IMPLEMENTATION__

#endif // __CUTILS_H__
