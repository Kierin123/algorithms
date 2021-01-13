#include <stdio.h>
#include <stdlib.h>


// ______________ Function to print the binary value of decimal number _________
//______________________________________________________________________________

void printf_bin(const int n)
{

    int tab[8] = {0};
    int div_n = n;
    int mod_n = n;
    for (int i = 0; i < 8; i++)
    {
        mod_n = div_n % 2;
        div_n = div_n / 2;
        tab[i] = mod_n;
    }
    for (int i = 3; i >= 0; i--)
    {

        printf("%d", tab[i]);
    }

    printf("\n");
}

void print_n(int elem)
{
    printf("%d ", elem);
    if (elem > 0)
    {
        elem--;
        print_n(elem);
    }
}

void grey(int n, int *tab, int k)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = (k + i) ^ ((k + i) >> 1);
    }
}

int main()
{
    int n = 0;
    int k = 0;

    printf("How many greycode numbers would you like to see: ");
    scanf("%d", &n);
    printf("What number would you like to start from: ");
    scanf("%d", &k);

    // _________________Dinamic allocation of the tab _________________
    //_________________________________________________________________
    int *tabptr;
    tabptr = (int *)malloc(sizeof(int) * n);
    grey(n, tabptr, k);

    //__________________Print the values ______________________________
    //_________________________________________________________________

    printf("Kod Greya: \n");
    for (int i = 0; i < n; i++)
    {
        printf_bin(tabptr[i]);
    }

    // print_n(20);
    free(tabptr); // free the memory
    return 0;
}