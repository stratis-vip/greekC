#include "my_math.h"
/**
 * @brief Υπολογίζει το γινόμενο Π(1->n)=1*2*3*...*(n-1)*n
 * Το n >=0
 * overflows at n=66
 * @param n int
 * @return unsigned long long 
 */
unsigned long long paragontiko(int n)
{
    if (n == 0 || n < 0) // αφορά μόνο σε Φυσικούς αριθμούς
        return 0;
    if (n == 1) // η μονάδα έχει 1!=1
        return 1;
    return n * paragontiko(n - 1); // σε κάθε άλλη περίπτωση ν! = ν*(ν-1)!
}

/**
 * @brief Υπολογίζει το άθροισμα Σ(1->n)=1+2+3+....+(n-1)+n
 *  το n >=0
 * overflows at n = 174724
 * @param n int
 * @return unsigned long long 
 */
unsigned long long sum(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
    {
        return (unsigned long long)n + sum(n - 1);
    }
}
/**
 * @brief Επιστρέφει 1 αν ο αριθμός είναι άρτιος
 * 
 * @param n 
 * @return int 
 */
int is_even(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}

/**
 * @brief Επιστρέφει 1 αν ο αριθμός είναι περιττός
 * 
 * @param n 
 * @return int 
 */
int is_odd(int n)
{
    return !is_even(n);
}

/**
 * @brief Επιστρέφει την τετραγωνική ρίζα του n, αν είναι ακέραιος.
 * Αλλιώς επιστρέφει 0 (ψευδές)
 * 
 * @param n 
 * @return int 
 */
int is_square(int n)
{
    int i = 0;
    do
    {
        ++i;
    } while (i * i != n && i * i < n);
    if (i * i > n)
        return 0;
    return i;
}
/**
 * @brief Επιστρέφει την κυβική ρίζα του n, αν είναι ακέραιος.
 * Αλλιώς επιστρέφει 0 (ψευδές)
 * @param n 
 * @return int 
 */
int is_cube(int n)
{
    int i = 0;
    do
    {
        i++;
    } while (i * i * i != n && i * i * i < n);
    if (i * i * i > n)
        return 0;
    return i;
}

/**
 * @brief Επιστρέφει 1 αν ο αριθμός n είναι πρώτος
 * 
 * @param n 
 * @return int 
 */
int is_prime(int n)
{
    if (n < 2 && n >= 0)
        return 0;
    int check = 1;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            check = 0;
            break;
        }
    }
    return check;
}