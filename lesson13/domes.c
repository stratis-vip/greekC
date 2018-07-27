//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/mio.h"

#define STRSIZE 80

typedef struct
{
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
} RECORD;

void read_record(RECORD *rec);

void print_record(RECORD rec);

void init_record(RECORD *rec);

void free_record(RECORD rec);

void copy_record(RECORD *dest, RECORD src);

int main()
{

    int N, epilogi;
    char *error;
    char errorT[MAXCHARSIZE] = {};
    RECORD x, *records;
    error = errorT;

    do
    {
        printf("Πόσες εγγραφές θες να εισάγεις; ");
        N = mfgets_double(&error, MAXCHARSIZE, 0);
        if (error[0] != '\0')
        {
            printf("Λάθος εισαγωγή στοιχείων: [%s]\n", error);
        }
    } while (error[0] != '\0');

    records = malloc(sizeof(RECORD) * N);
    if (!records)
    {
        printf("Αδυναμία προσάρτησης μνήμης!\n");
        exit(0);
    }

    for (int i = 0; i < N; ++i)
    {
        init_record(&records[i]);
        read_record(&records[i]);
    }

    init_record(&x);

    do
    {
        printf("Ποια εγγραφή θέλεις να αντιγράψεις (0..%d): ", N-1);
        epilogi = mfgets_int(&error, MAXCHARSIZE, 0);
        if (error[0] != '\0')
        {
            printf("Λάθος εισαγωγή επιλογής: [%s]\n", error);
        }
    } while (error[0] != '\0');

    copy_record(&x, records[epilogi]);
    printf("\n\nX (%dη εγγραφή):\n",epilogi);
    print_record(x);
    for (int i = 0; i < N; ++i)
    {
        print_record(records[i]);
        free_record(records[i]);
    }
    free_record(x);
    free(records);
}

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