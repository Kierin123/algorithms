#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define STACK_LENGTH 5

enum
{
    EXIT = 0,
    STATUS = 1,
    PUT = 2,
    TAKE = 3,

};

void Init_program()
{
    system("clear");
    printf("#####################################\n");
    printf("	STACK TESTING PROGRAM\n");
    printf("#####################################\n");
    printf("\n");
    printf("	EXIT - 0\n");
    printf("	STATUS - 1\n");
    printf("	PUT - 2\n");
    printf("	TAKE - 3\n\n");
}

void print_stack_tab(int tab[], int elements)
{
    for (int i = 0; i < elements; i++)
    {

        printf("stack[%d] = ", i);
        printf("%d\n", tab[i]);
    }
}

void main()
{
    int command = 1;
    int *stack;

    stack = (int *)calloc(STACK_LENGTH, sizeof(int));

    int pointer = 0;

    while (command)
    {

        Init_program();
        print_stack_tab(&stack[0], STACK_LENGTH);
        scanf("%d", &command);

        switch (command)
        {
        case EXIT:
        {
            system("clear");
            printf("EXIT!");
        }
        break;

        case TAKE:
        {
            if ((pointer >= 0) && (pointer <= STACK_LENGTH))
            {
                pointer--;
                printf("Ostatnia liczba %d\n", stack[pointer]);
                stack[pointer] = 0;
                        }
        }
        break;

        case PUT:
        {
            if ((pointer >= 0) && (pointer <= STACK_LENGTH))
            {
                scanf("%d", &stack[pointer]);
                pointer++;
            }
        }
        break;

        case STATUS:
        {
        }
        break;
        default:
            break;
        }
    }
    free(stack);
}
