#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//_______ Fill pointed array by the random values in range 0 - 100 ___

void rand_arr(int *arr_f, int elements)
{

    for (int i = 0; i < elements; i++)
    {
        arr_f[i] = (int)(rand() % 100);
    }
}

// ______ Print the pointed array on the screen separated by space _____

void print_arr(int *arr_f, int elements)
{
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", arr_f[i]);
    }
    printf("\n");
}

// _______ Copy the values from one array to second one _______________

void copy_arr(int *arr_f1, int *arr_f2, int elements)
{
    for (int i = 0; i < elements; i++)
    {
        arr_f2[i] = arr_f1[i];
    }
}

// _______ Bubbel sort algorithm - sorting the elements of the array by comparing all values one by one ____ 

void bubbel_sort(int *arr_f, int elements)
{
    int buf;

    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements - 1; j++)
        {
            if (arr_f[j] > arr_f[j + 1])
            {
                buf = arr_f[j + 1];
                arr_f[j + 1] = arr_f[j];
                arr_f[j] = buf;
            }
        }
    }
}

// _______ Quick sort - sorting algorithm, divide and win + partitioning algorithm. ________________________

void quick_sort(int *arr_f, int index_l, int index_r)
{

    int pivot = arr_f[(index_l + index_r) / 2];

    int i, j, buf;
    i = index_l;
    j = index_r;

    do
    {
        while (arr_f[i] < pivot)
            i++;

        while (arr_f[j] > pivot)
            j--;

        if (i <= j)
        {
            buf = arr_f[i];
            arr_f[i] = arr_f[j];
            arr_f[j] = buf;
            i++;
            j--;
        }

    } while (i <= j);

    if (j > index_l)
        quick_sort(arr_f, index_l, j);
    if (i < index_r)
        quick_sort(arr_f, i, index_r);
}

int main()
{
    clock_t start, stop;                // time marks
    float time_bubbel, time_quick;      // sorting time values

    int arr_elements;                   // array elements
    system("clear");
    printf("Give the array length: ");
    scanf("%d", &arr_elements);
    int *arr1;                          // define the array 1 of intigers
    int *arr2;                          // define the array 2 of intigers
    srand(time(NULL));

    //__________ ALLOCATE THE MEMORY FOR 2 ARRAYS __________________________

    arr1 = malloc(arr_elements * sizeof(int));
    arr2 = malloc(arr_elements * sizeof(int));

    rand_arr(arr1, arr_elements);
    copy_arr(arr1, arr2, arr_elements);

    //  printf("Elements of the array 1: ");
    //  print_arr(arr1, arr_elements);
    //  printf("Elements of the array 2: ");
    //  print_arr(arr2, arr_elements);

    //__________ BUBBLE SORT _ TIME MEASURE ________________________________

    start = clock();
    bubbel_sort(arr1, arr_elements);
    stop = clock();
    time_bubbel = (float)(stop - start) / CLOCKS_PER_SEC;

    //__________ QUICK SORT _ TIME MEASURE ________________________________

    start = clock();
    quick_sort(arr2, 0, arr_elements - 1);
    stop = clock();
    time_quick = (float)(stop - start) / CLOCKS_PER_SEC;

    printf("\n");

    //    printf("Sorted quick elements of the array 1: ");
    //    print_arr(arr1, arr_elements);
    //    printf("Sorted bubble elements of the array 2: ");
    //    print_arr(arr2, arr_elements);

    printf("Sorted bubbel the array in time: % 10.2f ms\n", time_bubbel * 1000);
    printf("Sorted quick the array in time: % 10.2f ms\n", time_quick * 1000);

    free(arr1);
    free(arr2);

    return 0;
}