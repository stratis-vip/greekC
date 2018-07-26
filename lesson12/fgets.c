//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//

#import <stdio.h>
#include <stdlib.h>

#define MAXCHARSIZE 255

char *mfgets(char *p, int size);
long mfgets_int(char **p, int size, int accept_error);

int main() {
    char alfa[MAXCHARSIZE] = "testares";
    char bita[25] = "aliteia";
    char *p = alfa;

    char *d = "test";
    int a = 0;

    printf("p->alfa = %s d =%s\n", p, d);
    p = bita;
    printf("p->alfa = %s\nd=%s\n", p, d);

    a = (int) mfgets_int(&p, MAXCHARSIZE, 0);
    printf("p (error in string) = [%s]\na = %d\n", p, a);

}

char * mfgets(char *p, int size) {
    fgets(p, size, stdin);
    for (int i = 0; i != size - 2; ++i) {
        if (p[i] == '\r' && p[i + 1] == '\n' && p[i + 2] == '\0') {
            p[i] = '\0';
            break;
        }
        if (p[i + 1] == '\n' && p[i + 2] == '\0') {
            p[i + 1] = '\0';
            break;
        }
    }
    return p;
}

long mfgets_int(char **ptr, int size, int accept_error) {

    *ptr = mfgets(*ptr,size);
    char *end_ptr;

    end_ptr = *ptr;
    long ret_val = strtol(end_ptr, ptr, 10);

    if (*ptr[0] != '\0' && accept_error){
        ret_val = 0;
    }
    return ret_val;
}
