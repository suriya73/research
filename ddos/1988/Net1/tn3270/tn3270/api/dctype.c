/*
 * Copyright (c) 1988 Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef lint
static char sccsid[] = "@(#)dctype.c	4.1 (Berkeley) 12/4/88";
#endif /* not lint */

#include "dctype.h"

unsigned char dctype[192] = {
/*00*/
	D_SPACE,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
/*10*/
	D_SPACE,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	0,
	0,
	0,
	0,
/*20*/
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	D_DIGIT|D_PRINT,
	0,
	0,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
/*30*/
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
	0,
	0,
	0,
	0,
	D_PUNCT|D_PRINT,
	0,
	D_PUNCT|D_PRINT,
	0,
	0,
/*40*/
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
/*50*/
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
/*60*/
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
/*70*/
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
/*80*/
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
/*90*/
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	D_LOWER|D_PRINT,
	0,
	0,
	0,
	0,
	0,
	0,
/*A0*/
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
/*B0*/
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	D_UPPER|D_PRINT,
	0,
	0,
	0,
	0,
	D_PUNCT|D_PRINT,
	D_PUNCT|D_PRINT,
};
