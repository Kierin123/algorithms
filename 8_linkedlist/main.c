#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Node
{
    int data;
    struct Node *next;
};

enum
{
    EXIT = 0,
    STATUS = 1,
    PUT_FRONT = 2,
    PUT_BACK = 3,
    PUT_BETWEEN = 4,
    TAKE_BACK = 5,
    SORT = 6,
    DELETE_KEY = 7,

};

void Init_program()
{
    system("clear");
    printf("\n#####################################\n");
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
    printf("	DELETE KEY - 7\n\n");
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

void push_front(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void push_back(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void push_between(struct Node *prev_node, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void del_key(struct Node **head_ref, int key)
{
    struct Node *temporary = *head_ref, *prev;


    if ((temporary != NULL) && (temporary->data == key))
    {
        *head_ref = temporary->next;
        free(temporary);
        return;
    }

    while ((temporary != NULL) && (temporary->data != key))
    {
        prev = temporary;
        temporary = temporary->next;
    }

    if (temporary == NULL)
    {
        return;
    }

    prev->next = temporary->next;

    free(temporary);
}

void main()
{
    struct Node *head = NULL;
    int command = 1;
    int data = 0;

    while (command)
    {

        Init_program();

        printf("Give the command: ");
        scanf("%d", &command);

        switch (command)
        {
        case EXIT:
        {
            system("clear");
            printf("EXIT!\n");
        }
        break;

        case STATUS:
        {
            printList(head);
        }
        break;

        case PUT_FRONT:
        {
            printf("Give the data: ");
            scanf("%d", &data);
            push_front(&head, data);
        }
        break;

        case PUT_BACK:
        {
            printf("Give the data: ");
            scanf("%d", &data);
            push_back(&head, data);
        }
        break;

        case PUT_BETWEEN:
        {
        }
        break;

        case TAKE_BACK:
        {
        }
        break;

        case DELETE_KEY:
        {
            printf("Give the data to delete: ");
            scanf("%d", &data);
            del_key(&head, data);
        }
        break;

        default:
            break;
        }
    }
}
