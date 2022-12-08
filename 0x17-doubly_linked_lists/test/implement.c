#include <stdio.h>

struct node
{
        int data;
        struct node *next;
        struct node *prev;
};


int main(void)
{
        struct node *head, *newnode, *temp;
        head = NULL
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == NULL)
                head = temp = newnode
        else
        {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
        }
}
