#include <stdio.h>
#include <stdlib.h>
#include "alg_anadromi.h"
#include "array.h"
#include "mstd.h"
#include "my_math.h"
#define SIZE 60000
int comp(const void *a, const void *b);
int main(int argc, char **argv) {
	int const n = 80;
	char *a1 = "abc", *b = "def";

	SWAP(a1, b);
	printf("must be 10, 5 -> %s, %s\n", a1, b);

	int array[SIZE];

	if (n > SIZE) return 0;
	//    int a = 13;
	// swap_int(&a, &a);
	// init_array(array, n, 1, 100);
	// print_array(array, n);
	// order_array_qsort(array,0,n-1);
	// print_array(array, n);
	printf("%d", 45);
	printf("%0*d\n", 4, 5);
	printf("%d", 34);
	init_array(array, n, 0, 100);
	print_array(array, n);
	// TODO σκατάκια
	// int value = 0;
	// do
	// {
	//     printf("\nΔώσε έναν ακέραιο μεγαλύτερο το 0: ");
	//     scanf("%d", &value);
	//     printf("Σύνολο %0d = %d\n", value, sum(value));
	// } while (value != 0);

	// int value = 0;
	// do
	// {
	//     printf("\nΔώσε έναν ακέραιο 0: ");
	//     scanf("%d", &value);
	//     int res = is_odd(value);
	//     if (!res)
	//         printf("O αριθμός %d είναι άρτιος!\n", value);
	//     printf("O αριθμός %d είναι περιττός!\n", value);
	// } while (value != 0);

	// int value = 0;
	// do
	// {
	//     printf("\nΔώσε έναν ακέραιο 0: ");
	//     scanf("%d", &value);
	//     int res = is_square(value);
	//     if (res)
	//         printf("O αριθμός %d είναι τετράγωνο φυσικού αριθμού!\n",
	//         value);
	//     else
	//         printf("O αριθμός %d δεν είναι τετράγωνο φυσικού αριθμού!\n",
	//         value);
	// } while (value != 0);

	// int value = 0;
	// do
	// {
	//     printf("\nΔώσε έναν ακέραιο 0: ");
	//     scanf("%d", &value);
	//     int res = is_cube(value);
	//     if (res)
	//         printf("O αριθμός %d είναι κύβος φυσικού αριθμού!\n", value);
	//     else
	//         printf("O αριθμός %d δεν είναι κύβος φυσικού αριθμού!\n",
	//         value);
	// } while (value != 0);

	// int value = 0;
	// do
	// {
	//  //   printf("\nΔώσε έναν ακέραιο 0: ");
	//     scanf("%d", &value);
	//     if (is_even(value))
	//         printf("O αριθμός %d είναι άρτιος!\n", value);

	//     if (is_odd(value))
	//         printf("O αριθμός %d είναι περιττός!\n", value);

	//     if (is_square(value))
	//         printf("O αριθμός %d είναι τετράγωνο αριθμού!\n", value);

	//     if (is_cube(value))
	//         printf("O αριθμός %d είναι κύβος αριθμού!\n", value);
	// } while (value != 0);

	// int value = 0;
	// do
	// {
	//     printf("\nΔώσε έναν ακέραιο: ");
	//     scanf("%d", &value);
	//     int res = is_prime(value);
	//     if (res)
	//         printf("O αριθμός %d είναι πρώτος!\n", value);
	//     else
	//         printf("O αριθμός %d δεν είναι πρώτος!\n", value);
	// } while (value != 0);
	// int const end = 1000000000;
	// printf("\nακέραιοι μέχρι το %d που είναι περιττοί, τετράγωνα και
	// κύβοι ταυτόχρονα!\n", end); for (int i = 1; i <= end; i += 2)
	//     // if ( (is_square(i) && (is_cube(i))) && (is_even(i))) //time
	//     this if ( is_odd(i) && is_square(i) && is_cube(i) ) //time to
	//     this
	//         printf("%d\n",i);

	//  printf("ακέραιοι μέχρι το %d που είναι άρτιοι, τετράγωνα και κύβοι
	//  ταυτόχρονα!\n", end);
	// for (int i = 1; i <= end; i += 2)
	//     // if ( (is_square(i) && (is_cube(i))) && (is_even(i))) //time
	//     this if ( is_even(i) && is_square(i) && is_cube(i) ) //time to
	//     this
	//         printf("%d\n",i);
	// int b = 0;
	// int a = 0;
	// do
	// {

	//     printf("\nΔώσε έναν ακέραιο: ");
	//     scanf("%d", &a);

	//     printf("\nΔώσε έναν ακέραιο: ");
	//     scanf("%d", &b);

	//     printf("%d %d\n", a, b);
	//     printf("O ΜΚΔ των (%d,%d) είναι: %d\n", a, b, mkd(a, b));
	// } while (a != 0 && b != 0);
	// anoi(4,"αρχική", "τελική", "βοηθητική");
	//__INT32_MAX__
	return 0;
}

int comp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
