#include <stdio.h>
#include <stdlib.h>

#define FRAMESIZE 19

#define N 3

int main() {


    printf("%c",201);
    for (int i = 0; i < FRAMESIZE; ++i)
        printf("%c", 205);
    printf("%c",187);

    printf("\n%c",186);
    for (int i = 0; N > i; ++i)
        printf(" ");
    printf("Hello, World!");
    for (int i = 0; N > i; ++i)
        printf(" ");
    printf("%c",186);

    printf("\n%c",200);
    for (int i = 0; FRAMESIZE > i; ++i)
        printf("%c", 205);
    printf("%c\n",188);


    int *p;
    if (!(p=malloc(sizeof(int))))
    {
        printf("%p is NULL", p);
        return EXIT_FAILURE;
    }
    scanf("%d",p);
    printf("%d\n",*p);
    free(p);
    return 0;
}