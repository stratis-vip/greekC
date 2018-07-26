// -*- C -*-
//===---------------------------- mystd.h ----------------------------------===//
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

/*
    mystd.h synopsis

Macros:
    SWAP
Types:

// C90

void swap_int(int *a, int *b);
*/

#ifndef MSTD_H_
#define MSTD_H_

#define SWAP(x, y) do { __typeof__(x) SWAP = x; x = y; y = SWAP; } while (0)

void swap_int(int *a, int *b);
#endif