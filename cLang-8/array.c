#include <stdlib.h>
#include <stdio.h>
#include "array.h"
#include "mstd.h"

/**
 * @brief Υπολογίζει το άθροισμα των στοιχείων n του πίνακα pinakas
 * 
 * @param pinakas ο πίνακας των ακεραίων
 * @param n ο αριθμός των στοιχείων
 * @return int το άθροισμα
 */
int sum_array(int *pinakas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += pinakas[i];
    }
    return sum;
}

/**
 * @brief Αρχικοποιεί ένα πίνακα ακεραίων pinakas με n στοιχεία
 * ανάμεσα στα a και b συμπεραλαμβανομένων
 * 
 * 
 * @param pinakas ο πίνακας των ακεραίων
 * @param n ο αριθμός των στοιχείων
 * @param a το μικρότερο όριο
 * @param b το μεγαλύτερο όριο
 */
void init_array(int *pinakas, int n, int a, int b)
{
    for (int i = 0; i != n; ++i)
    {
        pinakas[i] = a + arc4random_uniform(b - a + 1);
    }
}

/**
 * @brief Αρχικοποιεί ένα ταξινομημένο με αύξουσα σειρά πίνακα ακεραίων 
 * pinakas με n στοιχεία  * ανάμεσα στα a και b συμπεραλαμβανομένων
 * 
 * 
 * @param pinakas ο πίνακας των ακεραίων
 * @param n ο αριθμός των στοιχείων
 * @param a το μικρότερο όριο
 * @param b το μεγαλύτερο όριο
 */
void init_sorted_asc_array(int *pinakas, int n, int a, int b)
{
    int max_step = (b - a + 1) / n;
    // printf ("mmaxstep %d for array n-%d from a:%d to b:%d\n", max_step,n, a, b);
    int a1, b1;
    a1 = a;
    b1 = a + max_step;
    // printf("n\tmaxstep\tn\ta:%d\tb:%d\n", a, b);
    for (int i = 0; i != n; ++i)
    {
        int random_value;
        random_value = a1 + arc4random_uniform(b1 - a1 + 1);
        pinakas[i] = random_value;
        // printf("%d\t%d\t%d\t%d\t%d\n", i, max_step, n-i, a1, b1);
        max_step = (b - a1) / (n - i);
        a1 = random_value + 1;
        b1 = random_value + max_step;
    }
}
/**
 * @brief εκτυπώνει ένα πίνακα ακεραίων pinakas με στοιχεία n
 * 
 * @param pinakas o πίνακας των ακεραίων
 * @param n ο αριθμός των στοιχείων
 */
void print_array(int *pinakas, int n)
{
    printf("[");
    for (int i = 0; i != n - 1; ++i)
    {
        printf("%d, ", pinakas[i]);
    }
    printf("%d]\n", pinakas[n - 1]);
}

/**
 * @brief Υπολογίζει την μέγιστη τιμή από τα στοιχεία n
 * ενός πίνακα ακεραίων pinakas
 * 
 * @param pinakas πίνακας ακεραίων
 * @param n τα στοιχεία του πίνακα 
 * @return int το μέγιστο 
 */

int max_array(int *pinakas, int n)
{
    int ret_val = pinakas[0];
    for (int i = 1; i != n; ++i)
    {
        if (pinakas[i] > ret_val)
        {
            ret_val = pinakas[i];
        }
    }
    return ret_val;
}

/**
 * @brief Υπολογίζει το γινόμενο όλων των στοιχείων n 
 * ενός πίνακα ακεραίων
 * 
 * @param pinakas ο πίνακας ακεραίων
 * @param n ο αριθμός των στοιχείων
 * @return unsigned long long το γινόμενο
 */
unsigned long long product_array(int *pinakas, int n)
{
    unsigned long long prod = 1;
    for (int i = 0; i != n; ++i)
        prod *= pinakas[i];
    return prod;
}

/**
 * @brief Υπολογίζει την ελάχιστη τιμή από τα στοιχεία n
 * ενός πίνακα ακεραίων pinakas
 * 
 * @param pinakas πίνακας ακεραίων
 * @param n τα στοιχεία του πίνακα 
 * @return int το ελάχιστο 
 */
int min_array(int *pinakas, int n)
{
    int min = pinakas[0];
    for (int i = 1; i != n; ++i)
        if (pinakas[i] < min)
            min = pinakas[i];
    return min;
}

/**
 * @brief Υπολογίζει τον ΜΟ pinakas  πίνακα ακεραίων n στοιχείνω
 * 
 * @param pinakas πίνακας ακεραίων
 * @param n αριθμός στοιχείων πίνακα
 * @return float ο ΜΟ
 */
float avg(int *pinakas, int n)
{
    return sum_array(pinakas, n) / (float)n;
}

/**
 * @brief Αναζητά σε ένα πίνακα ακεραίων pinakas n στοιχείων
 * την τιμή value. Αν την βρει, επιστρέφει τον πρώτο δείκτη 
 * του στοιχείου στον πίνακα. Αν όχι επιστρέφει το -1
 * 
 * @param pinakas ο πίνακας των ακεραίων
 * @param n ο αριθμός των στοιχείων
 * @param value η τιμή που αναζητούμε
 * @return int -1 αν δεν υπάρχει, ο δείκτης που είναι ανάμεσα στις 
 * τιμές [0..n]
 */
int linear_search(int *pinakas, int n, int value)
{
    for (int i = 0; i != n; ++i)
        if (pinakas[i] == value)
            return i;
    return -1;
}

/**
 * @brief αναζητά το στοιχείο value σε ένα ταξινομημένο με αυξων τρόπο 
 * πίνακα ακεραίων pinakas n στοιχείων δυαδικά. 
 * 
 * @param pinakas ο ταξινομημένος με αύξουσα σειρά πίνακας ακεραίων
 * @param n το πλήθος των στοιχείων
 * @param value η τιμή που αναζητούμε
 * @return int -1 αν δεν βρέθηκε, ο δείκτης του στοιχείου αν βρέθηκε.
 */
int binary_search(int *pinakas, int n, int value)
{
    int start = 0;
    int finish = n;

    while (start <= finish)
    {
        int middle = (start + finish) / 2;
        if (pinakas[middle] == value)
            return middle;
        if (pinakas[middle] > value)
        {
            finish = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}

/**
 * @brief αναζητά το στοιχείο value σε ένα ταξινομημένο με αυξων τρόπο 
 * πίνακα ακεραίων pinakas n στοιχείων δυαδικά ME ΑΝΑΔΡΟΜΗ
 * 
 * @param pinakas ο ταξινομημένος με αύξουσα σειρά πίνακας ακεραίων
 * @param start ο δείκτης έναρξης εντός του πίνακα
 * @param finish ο δείκτης τέλους εντός του πίνακα
 * @param value η τιμή που αναζητούμε
 * @return int ο δείκτης του στοιχείου που αναζητούμε ή το -1 αν δεν υπάρχει
 */
int binary_search_rec(int *pinakas, int start, int finish, int value)
{
    int middle = 0;
    if (start > finish)
        return -1;

    middle = (start + finish) / 2;
    if (pinakas[middle] == value)
        return middle;
    if (pinakas[middle] > value)
    {
        return binary_search_rec(pinakas, start, middle - 1, value);
    }
    else
    {
        return binary_search_rec(pinakas, middle + 1, finish, value);
    }

    return -1;
}
/**
 * @brief Ταξινομεί τον πίνακα ακεραίων pinakas που έχει n στοιχεία κατά άυξουσα ή
 * φθίνουσα σειρά, με τη μέθοδο της ταξινόμησης με επιλογή( Insertion) 
 * 
 * @param pinakas ο πίνακας των ακεραίων 
 * @param n ο αριθμός των στοιχείων του πίνακα
 * @param order 1=Αύξουσα, 0= φθίνουσα
 */
void order_array_sel(int *pinakas, int n, int order)
{
    for (int i = 0; i != n - 1; ++i)
    // Δεν χρειάζεται μέχρι τον n διότι δεν μπορέι να κάνει αλλαγή θέσης
    // όντας το τελευταίο σημείο
    {
        for (int j = i; j != n; ++j)
        {
            if (order == 1) //ascending
            {
                if (pinakas[j] < pinakas[i])
                {
                    swap_int(&pinakas[j], &pinakas[i]);
                }
            }
            else
            { //descending
                if (pinakas[j] > pinakas[i])
                {
                    swap_int(&pinakas[j], &pinakas[i]);
                }
            }
        }
    }
}

void order_array_sel_rec(int *pinakas, int n, int order)
{
    // int limit = start;
    if (n == 0)
        return;
    else
    {
        order_array_sel_rec(pinakas, n - 1, order);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (order == 1)
            {
                if (pinakas[j] < pinakas[i])
                {
                    swap_int(&pinakas[j], &pinakas[i]);
                }
            }
            else
            {
                if (pinakas[j] > pinakas[i])
                {
                    swap_int(&pinakas[j], &pinakas[i]);
                }
            }
        }
    }
}
void order_array_ins(int *pinakas, int n, int order)
{
    for (int i = 1; i != n; ++i)
    {
        for (int j = i; j >= 1; --j)
        {
            if (order == 1)
            {
                if (pinakas[j] < pinakas[j - 1])
                {
                    swap_int(&pinakas[j], &pinakas[j - 1]);
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (pinakas[j] > pinakas[j - 1])
                {
                    swap_int(&pinakas[j], &pinakas[j - 1]);
                }
                else
                {
                    break;
                }
            }
        }
    }
}

void order_array_ins_rec(int *pinakas, int n, int order)
{
    if (n <= 1)
        return;

    order_array_ins_rec(pinakas, n - 1, order);

    // int last = n-1;
    // int j = n-2;

    for (int j = n - 2; j >= 0; --j)
    {
        if (order == 1)
        {
            if (pinakas[j + 1] < pinakas[j])
                swap_int(&pinakas[j + 1], &pinakas[j]);
            else
                break;
        }
        else
        {
            if (pinakas[j + 1] > pinakas[j])
                swap_int(&pinakas[j + 1], &pinakas[j]);
            else
                break;
        }
    }
}

void order_array_bubble(int *pinakas, int n, int order)
{
    for (int i = 0; i != n; ++i)
    {
        for (int j = n - 1; j > i; --j)
        {
            if (order == 1)
            {
                if (pinakas[j] < pinakas[j - 1])
                    swap_int(&pinakas[j], &pinakas[j - 1]);
            }
            else
            {
                if (pinakas[j] > pinakas[j - 1])
                    swap_int(&pinakas[j], &pinakas[j - 1]);
            }
        }
    }
}

void order_array_bubble_rec(int *pinakas, int n, int order)
{
    if (n == 1)
        return;
    order_array_bubble_rec(pinakas, n - 1, order);
    for (int j = n - 1; j > 0; --j)
    {
        if (order == 1)
        {
            if (pinakas[j] < pinakas[j - 1])
                swap_int(&pinakas[j], &pinakas[j - 1]);
        }
        else
        {
            if (pinakas[j] > pinakas[j - 1])
                swap_int(&pinakas[j], &pinakas[j - 1]);
        }
    }
}

void con(int *A, int nA, int *B, int nB, int *C)
{
    int aIn = 0, bIn = 0, index = 0;
    while (aIn < nA && bIn < nB)
    {
        if (A[aIn] < B[bIn])
        {
            C[index] = A[aIn];
            ++aIn;
        }
        else
        {
            C[index] = B[bIn];
            ++bIn;
        }
        ++index;
    }
    // print_array(C, nA + nB);
    if (aIn >= nA)
    {
        do
        {
            C[index] = B[bIn];
            ++index;
            ++bIn;
        } while (bIn < nB);
    }
    else
    {
        do
        {
            C[index] = A[aIn];
            ++index;
            ++aIn;
        } while (aIn < nA);
    }
}

void order_array_merge(int *pinakas, int n)
{
    if (n < 2)
        return;
    int lenA = n / 2;
    int lenB = n - (n / 2);
    int A[lenA];
    int B[lenB];
    for (int i = 0; i < n / 2; ++i)
    {
        A[i] = pinakas[i];
    }

    for (int i = n / 2; i < n; ++i)
    {
        B[i - n / 2] = pinakas[i];
    }

    order_array_merge(A, lenA);
    order_array_merge(B, lenB);

    for (int i = 0; i < lenA - 1; ++i)
    {
        if (A[i] > A[i + 1])
        {
            swap_int(&A[i], &A[i + 1]);
        }
    }

    for (int i = 0; i < lenB - 1; ++i)
    {
        if (B[i] > B[i + 1])
        {
            swap_int(&B[i], &B[i + 1]);
        }
    }
    int C[lenA + lenB];
    con(A, lenA, B, lenB, C);
    // print_array(C, lenA + lenB);
    for (int i = 0; i < lenA + lenB; ++i)
    {
        pinakas[i] = C[i];
    }
}

int get_split_pos(int *pin, int start, int finish)
{
    int index = pin[start]; //λαμβάνεται αυθαίρετα ως οδηγός το 1ο στοιχείο

    int i = start - 1, j = finish + 1; // το i για σάρωση από αριστερά προς τα δεξιά
                                       // το j για σάρωση από δεξιά προς αριστερά
    while (j > i)
    {
        do
        {
            ++i;
        } while (pin[i] < index);

         do
        {
            --j;
        } while (pin[j] > index);

        if (j>i)
            SWAP(pin[i],pin[j]);

    }
    return j;
}

void order_array_qsort(int *pin, int start, int finish)
{
    if (finish - start < 1)
        return;
    int pos = get_split_pos(pin, start,finish);
    order_array_qsort(pin,start,pos);
    order_array_qsort(pin,pos+1,finish);
}