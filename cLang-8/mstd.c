#define SWAP(x, y) do { typeof(x) SWAP = x; x = y; y = SWAP; } while (0)

void swap_int(int *a, int *b)
{
    if (*a == *b)
        return;

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}