//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//
#include <stdio.h>
#include "../includes/mio.h"

#define STRSIZE 80

typedef struct {
    char onoma[STRSIZE];
    char diefthinsi[STRSIZE];
    char arithmos[STRSIZE];
    char nomos[STRSIZE];
} RECORD;

void read_record(RECORD *rec);

void print_record(RECORD rec);

int main() {

    RECORD rec;

    read_record(&rec);
    print_record(rec);

}

void read_record(RECORD *rec) {
    printf("Δώσε το όνομα: ");
    mfgets(rec->onoma, STRSIZE);

    printf("Δώσε τη διεύθυνση: ");
    mfgets(rec->diefthinsi, STRSIZE);

    printf("Δώσε τον αριθμός: ");
    mfgets(rec->arithmos, STRSIZE);

    printf("Δώσε το Νομό: ");
    mfgets(rec->nomos, STRSIZE);
}

void print_record(RECORD rec) {
    printf("%s\n%s %s\n%s",
    rec.onoma, rec.diefthinsi, rec.arithmos, rec.nomos);

}
