#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

int main() {

    long *p;
    int N;
    char temp[MAXSIZE]={}, *end_ptr;
    end_ptr = NULL;
    printf("Δώσε το μέγεθος του πίνακα: ");

    scanf("%s", temp);
    N = (int) strtol(temp, &end_ptr, 10);
    if (end_ptr[0] == '\0') {

        if (!(p = malloc(sizeof(long) * N))) {
            printf("Αδυναμία δέσμευσης μνήμης!\nΤο πρόγραμμα θα τερματιστεί!\n");
            return EXIT_FAILURE;
        }

        for (int i = 0; N > i; ++i) {
            p[i] = (long)i * i;
            printf("p[%d] = %ld\n", i, p[i]);
        }
        free(p);
        return 0;
    } else {
        printf("Δεν έδωκες ακέραιο αριθμό!\nΝτροπή σου!\nΤο πρόγραμμα θα τερματιστεί!\n");
        return EXIT_FAILURE;
    }
}