#include <stdio.h>
#include <math.h>

float avarage_f(float a, float b, float c, float d, float e)
{
    float suma = a + b + c + d + e;
    return (suma) / 5;
}

float find_min(float a, float b, float c, float d, float e)
{
    float m = a;

    if (m > b)
        m = b;
    if (m > c)
        m = c;
    if (m > d)
        m = d;
    if (m > e)
        m = e;
    return m;
}

float find_nearest(float avg, float a, float b, float c, float d, float e)
{

    float m = fabs(a - avg);
    float l = a;

    if (m > fabs(b - avg))
    {
        m = fabs(b - avg);
        l = b;
    }

    if (m > fabs(c - avg))
    {
        m = fabs(c - avg);
        l = c;
    }
    if (m > fabs(d - avg))
    {
        m = fabs(d - avg);
        l = d;
    }
    if (m > fabs(e - avg))
    {
        m = fabs(e - avg);
        l = e;
    }
    return l;
}

void main()
{
    float a, b, c, d, e;
    printf("Podaj 5 liczb: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);

    float avarage = avarage_f(a, b, c, d, e);

    printf("Średnia z tych liczb wynosi: %f\n", avarage);
    printf("Najbliższa liczba do średniej to: %f\n", find_nearest(avarage, a, b, c, d, e));
}