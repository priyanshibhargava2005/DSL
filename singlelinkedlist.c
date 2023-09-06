#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int count(struct node *head);
void insert_at_end(struct node *head);
void insert_at_beg(struct node **head);
void insert_at_random(struct node *head);
void delete_at_end(struct node *head);
void delete_at_start(struct node **head);
void delete_at_random(struct node *head);

// creating single linked list
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link = current;

    insert_at_end(head);
    insert_at_beg(&head);
    insert_at_random(head);
    int nodecount = count(head); // count the number of nodes
    printf("no of nodes: %d \n", nodecount);

    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    delete_at_end(head);
    printf("\n");

    struct node *p2 = head;
    while (p2 != NULL)
    {
        printf("%d ", p2->data);
        p2 = p2->link;
    }

    delete_at_start(&head);
    printf("\n");

    struct node *p3 = head;
    while (p3 != NULL)
    {
        printf("%d ", p3->data);
        p3 = p3->link;
    }

    delete_at_random(head);
    printf("\n");

    struct node *p4 = head;
    while (p4 != NULL)
    {
        printf("%d ", p4->data);
        p4 = p4->link;
    }
}

// transversing
// count the number of nodes
int count(struct node *head)
{
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

// insertiom
void insert_at_end(struct node *head)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = 32;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void insert_at_beg(struct node **head)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 1457;
    ptr->link = NULL;
    ptr->link = *head;
    *head = ptr;
}

void insert_at_random(struct node *head)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *current = head;
    ptr->data = 89;
    ptr->link = NULL;

    int position = 3;
    for (int i = 1; i < position - 1 && current->link != NULL; i++)
    {
        current = current->link;
    }
    ptr->link = current->link;
    current->link = ptr;
}

// deletion
void delete_at_end(struct node *head)
{
    if (head == NULL)
    {
        printf("empty list");
    }
    else
    {
        struct node *temp = head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }

        free(temp->link);
        temp->link = NULL;
    }
}

void delete_at_start(struct node **head)
{
    if (head == NULL)
    {
        printf("empty list");
    }
    else
    {
        struct node *temp = *head;
        *head = (*head)->link;
        free(temp);
    }
}
void delete_at_random(struct node *head)
{
    if (head == NULL)
    {
        printf("empty list");
    }
    else
    {
        struct node *prev = head;
        struct node *current = head;
        int position = 3;
        for (int i = 1; i < position - 1 && current->link != NULL; i++)
        {
            current = current->link;
            prev = current->link;
        }
        current->link = prev->link;
        free(prev);
    }
}