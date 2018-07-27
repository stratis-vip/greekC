//
// Created by Στρατής Χριστοδούλου on 27/7/18.
//

#ifndef LESSON13_RECORDS_H
#define LESSON13_RECORDS_H

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
#endif //LESSON13_RECORDS_H
