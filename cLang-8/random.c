#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 1000
#define ERROR -1

void init_array(long *pinakas, int n, long a, long b);
void print_array(long *pinakas, int n);
int max_array(long *pinakas, int n);

int main(int argc, char **argv)
{
    long pinakas[SIZE];
    // MENOY
    int choice = {1};
    int N = {ERROR}, a = {ERROR}, b = {ERROR};
    while (choice != 5)
    {
        printf("\nΜΕΝΟΥ ΕΠΙΛΟΓΩΝ");
        printf("\n--------------");
        printf("\n1. ΕΙΣΑΓΩΓΗ ΤΟΥ ΜΕΓΕΘΟΥΣ ΤΟΥ ΠΙΝΑΚΑ");
        printf("\n2. ΑΡΧΙΚΟΠΟΙΗΣΗ ΠΙΝΑΚΑ");
        printf("\n3. ΥΠΟΛΟΓΙΣΜΟΣ ΜΕΓΙΣΤΟΥ");
        printf("\n4. ΕΚΤΥΠΩΣΗ ΠΙΝΑΚΑ");
        printf("\n5. ΕΞΟΔΟΣ");
        printf("\nΕπιλογή: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Δώσε το μέγεθος του πίνακα: ");
            scanf("%d", &N);
            //init_array(pinakas, N, )
            break;
        case 2:
            printf("Δώσε την αρχή του διαστήματος των τυχαίων αριθμών: ");
            scanf("%d", &a);
            printf("Δώσε το τέλος του διαστήματος των τυχαίων αριθμών: ");
            scanf("%d", &b);
            if (N == ERROR)
            {
                printf("Πρέπει πρώτα να δώσετε το μέγεθος του πίνακα (επιλογή 1)\n");
            }
            else
            {
                init_array(pinakas, N, a, b);
                printf("Ο πίνακας δημιουργήθηκε! \n");
            }
            break;
        case 3:
            printf("Ο μέγιστος είναι: %d\n", max_array(pinakas, N));
            break;
        case 4:
            print_array(pinakas, N);
            break;
        case 5:
            printf("Γεια χαρά!\n");
            break;
        }
    }
    return 0;
}

void print_array(long *pinakas, int n)
{
    printf("[");
    for (int i = 0; i != n - 1; ++i)
    {
        printf("%ld, ", pinakas[i]);
    }
    printf("%ld]\n", pinakas[n - 1]);
}

void init_array(long *pinakas, int n, long a, long b)
{
    for (int i = 0; i != n; ++i)
    {
        pinakas[i] = a + arc4random_uniform(b - a + 1);
    }
}

int max_array(long *pinakas, int n)
{
    int ret_val = -1;
    for (int i = 0; i != n; ++i)
    {
        if (pinakas[i] > ret_val)
        {
            ret_val = pinakas[i];
        }
    }
    return ret_val;
}