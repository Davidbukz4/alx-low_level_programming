#include <stdio.h>

void del_from_beginning()
{
        struct node *temp;
        if (head == NULL)
                return NULL;
        else
                temp = head;
                head = head->next;
                head->prev = NULL;
                free(temp);
}


void del_from_end()
{
        // if tail pointer is not given, we have to traverse the list to the end node
        struct node *tail, *temp;
        while (tail->next != NULL)
                tail = tail->next;
        if (tail == NULL)
                return NULL;
        else
        {
                temp = tail;
                tail->prev->next = NULL;
                tail = tail->prev;
                free(temp);
        }
}


void del_from_pos()
{
        int pos, i = 1;
        struct node *temp;
        // assume pos = 3
        temp = head;
        while (i < pos)
        {
                temp = temp->next;
                i++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
}
