#include <stdio.h>
#include <time.h>

long power(long x, long p)
{
    if (p == 1)
    {
        return x;
    }
    else
    {
        return potega(x, p - 1) * x;
    }
}

long power_for(long x, long p)
{
    long pow = x;
    for (int i = 0; i < p-1; i++)
    {
        pow *= x;
    }
    return pow;
}

void main()
{
    clock_t start;
    clock_t stop;

    float time_rec = 0;
    float time_for = 0;

    long xm, pm;
    scanf("%d", &xm);
    scanf("%d", &pm);

    start = clock();
    long pot = potega(xm, pm);
    stop = clock();
    time_rec = (float)(stop - start) / CLOCKS_PER_SEC;

    start = clock();
    long potfor = potega_for(xm, pm);
    stop = clock();
    time_for = (float)(stop - start) / CLOCKS_PER_SEC;

    printf("Wynik : %d \nWynik for : %d\n", pot, potfor);
    printf("Czas: %f\nCzas for: %f", time_rec, time_for);
}