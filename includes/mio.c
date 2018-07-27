//
// Created by Στρατής Χριστοδούλου on 26/7/18.
//

#include <stdio.h>
#include <stdlib.h>
#include "mio.h"

/**
 * @brief Επιστρέφει στον p την είσοδο από το stdin μεγέθους το πολύ size
 * @param p ένας δείκτης σε char
 * @param size το μέγιστο μήκος που διαβάζει
 */
void mfgets(char *p, int size) {
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
}

/**
 * @brief Η συνάρτηση επιστρέφει τον ακέραιο από την είσοδο stdin.
 *        Αν η είσοδος δεν είναι αριθμός, ο ptr περιέχει τους ακατάλληλους χαρακτήρες.
 *
 * @param ptr περιέχει τους ακατάλληλους χαρακτήρες αν έγινε λάθος εισαγωγή. Αλλιώς είναι NULL
 * @param accept_error 0 δεν υπολογίζει λάθη εισαγωγής και επιστρέφει τον αριθμό.
 *  1 αν έχει λάθος χαρακτήρες επιστρέφει 0
 * @return Ακέραιος.
 */
long mfgets_int(char **ptr, int size, int accept_error) {

    mfgets(*ptr, size);
    char *end_ptr;

    end_ptr = *ptr;
    long ret_val = strtol(end_ptr, ptr, 10);

    if (*ptr[0] != '\0' && accept_error) {
        ret_val = 0;
    }
    return ret_val;
}

/**
 * @brief Η συνάρτηση επιστρέφει τον πραγματικό διπλής ακριβείας από την είσοδο stdin.
 *        Αν η είσοδος δεν είναι αριθμός, ο ptr περιέχει τους ακατάλληλους χαρακτήρες.
 *
 * @param ptr περιέχει τους ακατάλληλους χαρακτήρες αν έγινε λάθος εισαγωγή. Αλλιώς είναι NULL
 * @param accept_error 0 δεν υπολογίζει λάθη εισαγωγής και επιστρέφει τον αριθμό.
 *  1 αν έχει λάθος χαρακτήρες επιστρέφει 0
 * @return Πραγματικός διπλής ακριβείας.
 */
double mfgets_double(char **ptr, int accept_error) {
    char temp[MAXCHARSIZE] = {}; //ορίζω ένα πίνακα να κρατά την είσοδο
                  //ορίζω ένα δείκτη στο πίνακα που θα κρατά την είσοδο για να τον καλώ byreference
    mfgets(temp, MAXCHARSIZE);
    char *end_ptr;

    end_ptr = temp;
    double ret_val = strtof(end_ptr, ptr);

    //αν υπάρχει λάθος, τότε ο ptr δεν είναι NULL
    if (*ptr[0] != '\0' && accept_error) {
        ret_val = 0;
    }
    return ret_val;
}
