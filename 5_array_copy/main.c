#include <stdio.h>
#include <stdlib.h>

#define T1_elem 10
#define T2_elem 10

void tab_copy(int t1[], int t2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t2[i] = t1[i];
    }
}

void find_equal(int tab[], int n)
{
    int tab1[n];
    tab_copy(tab, tab1, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != j) && (tab[i] == tab[j]))
            {
                printf("Element %d jest zduplikowany.\n", tab[i]);
            }
        }
    }
}

int main()
{

    int T1[T1_elem] = {0};

    int *T2;
    T2 = (int *)malloc(sizeof(int) * T2_elem);

    
   // for (int i = 0; i < T2_elem; i++)
   // {
   //     T2[i] = i ; 
   // }

    //tab_copy(T1, T2, 10);
    printf("T1: ");
    for (int i = 0; i < T1_elem; i++)
    {
        printf("%d ", T1[i]);
    }
    printf("\n");
    printf("T2: ");
    for (int i = 0; i < T2_elem; i++)
    {
        printf("%d ", T2[i]);
    }
    printf("\n");
    free(T2);

    return 0;
}