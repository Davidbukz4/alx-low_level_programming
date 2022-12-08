#include <stdio.h>

struct node
{
        int data;
        struct node *next;
        struct node *prev;
};

int main(void)
{
        struct node *head, *tail, *newnode;
        // create doubly-linked list with head and tail pointer
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL, newnode->next = NULL;
        if (head == NULL)
        {
                head = tail = newnode;
        }
        else
        {
                tail->next = nextnode;
                newnode->prev = tail;
                tail = newnode;
        }
}


void insert_@_beginning()
{
        struct node *head;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL, newnode->next = NULL;

        head->prev = newnode;
        newnode->next = head;
        head = newnode;
}


void insert_@_end()
{
        // if tail pointer is not given, you need to traverse the list to the end
        struct node *head, *tail, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL, newnode->next = NULL;
        tail = head;
        while (tail->next != NULL)
        {
                tail = tail->next;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
}


void insert_@_pos()
{
        int pos, i = 1;
        // invalid position; if pos < 1 or pos > len(list)
        printf("Enter position: ");
        scanf("%d", &pos);
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        temp = head;
        while (i < pos - 1)
        {
               temp = temp->next;
               i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
}


void insert_after_pos()
{
         printf("Enter position: ");
         scanf("%d", &pos);
         struct node *newnode, *temp;
         newnode = (struct node *)malloc(sizeof(struct node));
         printf("Enter data: ");
         scanf("%d", &newnode->data);
         temp = head;
         while (i < pos)
         {
                temp = temp->next;
                i++;
         }
         newnode->prev = temp;
         newnode->next = temp->next;
         temp->next = newnode;
         newnode->next->prev = newnode;
}
