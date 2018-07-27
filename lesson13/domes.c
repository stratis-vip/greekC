//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "records.h"
#include "../includes/mio.h"

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
