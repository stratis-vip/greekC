//
// Created by Στρατής Χριστοδούλου on 27/7/18.
//

#include <stdlib.h>
#include <stdio.h>
#include <mio.h>
#include <string.h>
#include "records.h"


void read_record(RECORD *rec)
{
    printf("Δώσε το όνομα: ");
    mfgets(rec->onoma, STRSIZE);

    printf("Δώσε τη διεύθυνση: ");
    mfgets(rec->diefthinsi, STRSIZE);

    printf("Δώσε τον αριθμός: ");
    mfgets(rec->arithmos, STRSIZE);

    printf("Δώσε το Νομό: ");
    mfgets(rec->nomos, STRSIZE);
}

void print_record(RECORD rec)
{
    printf("%s\n%s %s\n%s\n",
           rec.onoma, rec.diefthinsi, rec.arithmos, rec.nomos);
}

void init_record(RECORD *rec)
{
    rec->onoma = malloc(sizeof(char) * STRSIZE);
    if (!rec->onoma)
    {
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->arithmos = malloc(sizeof(char) * STRSIZE);
    if (!rec->arithmos)
    {
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->diefthinsi = malloc(sizeof(char) * STRSIZE);
    if (!rec->diefthinsi)
    {
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
    rec->nomos = malloc(sizeof(char) * STRSIZE);
    if (!rec->nomos)
    {
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }
}

void free_record(RECORD rec)
{

    free(rec.nomos);
    free(rec.diefthinsi);
    free(rec.onoma);
    free(rec.arithmos);
}

void copy_record(RECORD *dest, RECORD src)
{
    strcpy(dest->onoma, src.onoma);
    strcpy(dest->diefthinsi, src.diefthinsi);
    strcpy(dest->nomos, src.nomos);
    strcpy(dest->arithmos, src.arithmos);
}