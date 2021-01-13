#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define STACK_LENGTH 5

enum
{
    EXIT = 0,
    STATUS = 1,
    PUT_FRONT = 2,
    PUT_BACK = 3,
    TAKE_FRONT = 4,
    TAKE_BAKC = 5,
    SORT = 6,
    REVERSE = 7,

};

void Init_program()
{
    system("clear");
    printf("#####################################\n");
    printf("	Linked list exercises\n");
    printf("#####################################\n");
    printf("\n");
    printf("	EXIT - 0\n");
    printf("	STATUS - 1\n");
    printf("	PUT FRONT - 2\n");
    printf("	PUT BACK - 3\n\n");
    printf("	TAKE FRONT - 4\n");
    printf("	TAKE BACK - 5\n");
    printf("	SORT - 6\n");
    printf("	REVERSE - 7\n\n");
}

void print_list_tab(int *tab, int elements)
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
    int stack[5] = {0};
    __intptr_t *wsk = NULL;
    int pointer = 0;

    while (command)
    {

        Init_program();
        print_stack_tab(stack, STACK_LENGTH);

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
            pointer--;
            printf("Ostatnia liczba %d\n", stack[pointer]);
            stack[pointer] = 0;
        }
        break;

        case PUT:
        {
            scanf("%d", &stack[pointer]);
            pointer++;
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
}
