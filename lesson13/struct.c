#include <stdio.h>
#include "mio.h"

#define RECSIZE 80

struct date {
    int day;
    int month;
    int year;
};


struct person {
    char name[RECSIZE];
    char surname[RECSIZE];
    struct date gennisi;
};

void print_date(struct date);
void read_person(struct person *p);
void print_person(struct person);

int main() {
    struct person a, b;
    printf("Δώσε τα στοιχεία του πρώτου ατόμου:\n");
    read_person(&a);
    printf("\nΔώσε τα στοιχεία του δεύτερου ατόμου:\n");
    read_person(&b);


    print_person(a);
    printf("\n");
    print_person(b);
    return 0;
}

void print_date(struct date d) {
    printf("%02d/%02d/%4d", d.day, d.month, d.year);
}

void print_person(struct person p) {
    printf("Όνομα: \t\t\t\t%s\nΕπίθετο: \t\t\t%s\nΗμνία γέννησης: \t", p.name, p.surname);
    print_date(p.gennisi);
    printf("\n");
}

void read_person(struct person *p){
    char error[RECSIZE];
    char *ptr = error;
    printf("Δώσε το όνομα: ");
    mfgets(p->name, RECSIZE);

    printf("Δώσε το επίθετο: ");
    mfgets(p->surname, RECSIZE);

    do {
        printf("Δώσε ημέρα γέννησης (1..31): ");
        p->gennisi.day = (int) mfgets_int(&ptr, RECSIZE, 1);
    } while (ptr[0] != '\0' || p->gennisi.day > 31 || p->gennisi.day < 1);


    do {
        printf("Δώσε μήνα γέννησης (1..12): ");
        p->gennisi.month = (int) mfgets_int(&ptr, RECSIZE, 1);
    } while (ptr[0] != '\0' || p->gennisi.month > 12 || p->gennisi.month < 1);


    do {
        printf("Δώσε έτος γέννησης (πχ 1988): ");
        p->gennisi.year = (int) mfgets_int(&ptr, RECSIZE, 1);
    }  while (ptr[0] != '\0' ||  p->gennisi.year < 1900);



}