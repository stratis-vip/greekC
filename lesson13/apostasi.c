//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//
#include <stdio.h>
#include <math.h>
#include "mio.h"

#define STRSIZE 80

typedef struct {
    float x;
    float y;
} point;

void get_point(point *p);

double apostasi(point a, point b);

int main() {

    point A, B;

    get_point(&A);
    get_point(&B);

    printf("H απόσταση μεταξύ των σημείων Α(%.2f, %.2f) και Β(%.2f, %.2f) είναι %.4f",
           A.x, A.y, B.x, B.y, apostasi(A, B));
    return 0;
}

void get_point(point *p) {
    char error[MAXCHARSIZE] = {};
    char *ptr = error;
    printf("Δώσε τις συνεταγμένες του σημείου: \n");
    do {
        printf("X: ");
        p->x = (float) mfgets_double(&ptr, 1);
    } while (ptr[0] != '\0');
    do {
        printf("Y: ");
        p->y = (float) mfgets_double(&ptr, 1);
    } while (ptr[0] != '\0');
}

double apostasi(point a, point b) {
    return sqrt(
            pow(b.x - a.x, 2) +
            pow(b.y - a.y, 2)
    );
}

