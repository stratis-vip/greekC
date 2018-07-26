// -*- C -*-
//===---------------------------- array.h ----------------------------------===//
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

/*
    array.h synopsis

Macros:

Types:

// C90

int sum_array(int *ar, int size);
void init_array(int *pinakas, int n, int a, int b);
void init_sorted_asc_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);
unsigned long long product_array(int *pinakas, int n);
int min_array(int *pinakas, int n);
float avg(int *pinakas, int n);
int linear_search(int *pinakas, int n, int value);
int binary_search(int *pinakas, int n, int value);
int binary_search_rec(int *pinakas, int start, int finish, int value);
void order_array_sel(int *pinakas, int n, int order);
void order_array_sel_rec(int *pinakas, int n, int order);
void order_array_ins(int *pinakas, int n,  int order);
void order_array_bubble(int *pinakas, int n, int order);
void order_array_bubble_rec(int * pinakas, int n, int order);
*/

#ifndef ARRAY_H_
#define ARRAY_H_
int sum_array(int *pinakas, int n);
void init_array(int *pinakas, int n, int a, int b);
void init_sorted_asc_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);
unsigned long long product_array(int *pinakas, int n);
int min_array(int *pinakas, int n);
float avg(int *pinakas, int n);
int linear_search(int *pinakas, int n, int value);
int binary_search(int *pinakas, int n, int value);
int binary_search_rec(int *pinakas, int start, int finish, int value);
void order_array_sel(int *pinakas, int n, int order);
void order_array_sel_rec(int *pinakas, int n, int order);
void order_array_ins(int *pinakas, int n, int order);
void order_array_ins_rec(int *pinakas, int n, int order);
void order_array_bubble(int *pinakas, int n, int order);
void order_array_bubble_rec(int *pinakas, int n, int order);
void order_array_merge(int*pinakas, int n);
void order_array_qsort(int *pin, int start, int finish);
#endif