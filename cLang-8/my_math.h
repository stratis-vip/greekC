// -*- C -*-
//===---------------------------- my_math.h ----------------------------------===//
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

/*
    my_math.h synopsis

Macros:

Types:

// C90

unsigned long long paragontiko(int n);//overflows at n = 66
unsigned long long sum(int); //overflow at n = 174724
int is_even(int);
int is_odd(int);
int is_square(int);
int is_cube(int);
int is_prime(int n);

*/

#ifndef MY_MATH_H_
#define MY_MATH_H_

unsigned long long paragontiko(int n);
unsigned long long sum(int n); 
int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);
int is_prime(int n);

#endif
