//
// Created by Στρατής Χριστοδούλου on 25/7/18.
//

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv) {

    int **p; // 2διαστατος πίνακας με Μ σειρές και Ν στήλες
    /*
     *   Μ0 ΝΟ Ν1 ... ΝΝ
     *   Μ1 Ν0 Ν1 ... ΝΝ
     *   ...............
     *   ΜΝ ΝΟ Ν1 ... ΝΝ
     */

    int M, N;
    //  printf("Δώσε τον αριθμός των σειρών: ");
    scanf("%d", &M);
    //  printf("Δώσε τον αριθμός των στηλών: ");
    scanf("%d", &N);

    if (!(p = malloc(sizeof(int *) * M))) {
        printf("Αδυναμία δέσμευσης μνήμης!\nΤο πρόγραμμα θα τερματιστεί!\n");
        return EXIT_FAILURE;
    };

    for (int i = 0; M > i; ++i) {
        if (!(p[i] = malloc(sizeof(int) * N))) {
            free(p);
            printf("Αδυναμία δέσμευσης μνήμης!\nΤο πρόγραμμα θα τερματιστεί!\n");
            return EXIT_FAILURE;
        };
        for (int j = 0; N > j; ++j) {
            p[i][j] = (j + i) * j + i;
        }
    }
    printf("2διάστατος πίνακας (%ld)bytes [%d, %d] = \n[", sizeof(int**) + M*sizeof(int *)+M*N*sizeof(int), M, N);
    for (int i = 0; M > i; ++i) {
        for (int j = 0; N > j; ++j) {
            if (i == M - 1 && j == N - 1) {
                printf("%6d ]", p[i][j]);
            } else {
                printf("%6d, ", p[i][j]);
            }
//            printf("%d ", p[i][j]);
        }
        printf("\n ");
    }
    for (int i = 0; M > i; ++i) {
        free(p[i]);
    }
    free(p);

    return 0;
}
