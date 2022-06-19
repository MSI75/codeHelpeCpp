#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head, *temp;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        struct node *ptr;
        int item;
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter value:\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted\n");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted\n");
        }
    }

    printf("print\n");
    while (head->next != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);

    return 0;
}