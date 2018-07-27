//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//
#include <stdio.h>
#include <stdlib.h>
#include "../includes/mio.h"

#define STRSIZE 80

typedef struct {
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
} RECORD;

void read_record(RECORD *rec);

void print_record(RECORD rec);

void init_record(RECORD *rec);

void free_record(RECORD *rec);

int main() {

    RECORD rec;

    init_record(&rec);
    
    read_record(&rec);
    print_record(rec);
    free_record(&rec);

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

void init_record(RECORD *rec) {
    rec->onoma = malloc(sizeof(char)*STRSIZE);
    if (!rec->onoma){
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->arithmos = malloc(sizeof(char)*STRSIZE);
    if (!rec->arithmos){
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->diefthinsi = malloc(sizeof(char)*STRSIZE);
    if (!rec->diefthinsi){
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->nomos = malloc(sizeof(char)*STRSIZE);
    if (!rec->nomos){
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
}

void free_record(RECORD *rec) {

    free (rec->nomos);
    free (rec->diefthinsi);
    free (rec->onoma);
    free (rec->arithmos);


}
