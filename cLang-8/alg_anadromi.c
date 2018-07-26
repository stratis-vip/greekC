#include <stdio.h>
#include "alg_anadromi.h"

/**
 * @brief Υπολογισμός του Fib(n) όπου 
 * Fib(0) = 0
 * Fib(1) = 1
 * Fib(2) = 1
 * Ffib(3) = Fib(2) + Fib(1) = 2
 * .....
 * Fib(n) = Fib(n-2)+fib(n-1)
 * 
 * @param n 
 * @return unsigned long long 
 */
unsigned long long fibonacci(int n)
{
    // υπερχειλίζει στο 49
    if (n <= 0)
        return 0;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
/**
 * @brief Αναζήτηση του μέγιστου κοινού διαιρέτη με τον αλγόριθμο του Ευκλείδη
 * δηλαδή μκδ(α,β)
 *  αν α==β => μκδ(α,β) = α
 *  ΕΠΑΝΑΛΗΨΗ
 *  αν α > β => μκδ(α-β, β)
 *  αν α < β => μκδ(α, β-α)
 *  ΩΣΠΟΥ α==β 
 *  ΜΚΔ μπορεί να είναι και το 1 (δεν διαιρούνται με άλλο)
 * @param a ο ένας ακέραιος
 * @param b ο άλλος ακέραιος
 * @return int 
 */
int mkd(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return mkd(a - b, b);
    }
    else
    {
        return mkd(a, b - a);
    }
}

/**
 * @brief Ο Αλγόριθμος για την μεταφορά μιας στήλης Ν δίσκων σε άλλη
 * χωρίς να μπει μεγαλύτερος δίσκος πάνω από μικρότερο
 * Εχω 3 στήλες:
 * Την αρχική, την τελική και την βοηθητική
 * Λύνω για Ν == 1
 * ΜΕΤ: ΑΡΧΙΚΗ - > ΤΕΛΙΚΗ
 * Αν Ν >= 2 (ΕΠΑΝΑΛΗΨΗ)
 * ΛΥΣΕ Ν-1 ΑΡΧΙΚΗ -> ΒΟΗΘΗΤΙΚΗ
 * ΜΕΤ: Ν ΑΡΧΙΚΗ -> ΤΕΛΙΚΗ
 * ΛΥΣΕ Ν-1 ΒΟΗΘΗΤΙΚΗ -> ΤΕΛΙΚΗ
 * ΩΣ Ν==1
 * 
 * @param N ο αριθμός των δίσκων
 * @param a το όνομα της αρχικής στήλης
 * @param b το όνομα της στήλης προορισμού
 * @param c το όνομα της βοηθητικής στήλης
 */
void anoi(int N, char *a, char *b, char *c)
{
    // N ο αριθμός των δίσκων
    // a η αρχική στηλη b τελική στήλη c βοηθητική στήλη

    if (N == 1)
    {
        printf("Μετ. το δίσκο: %d από [%s]->[%s]\n", N, a, b);
    }
    else
    {
        anoi(N-1, a, c, b);
        printf("Μετ. το δίσκο: %d από [%s]->[%s]\n", N , a, b);
        anoi(N - 1, c, b, a);
    }
}