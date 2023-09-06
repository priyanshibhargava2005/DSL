#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void add_at_beg(struct node **head);
void add_at_end(struct node *head);
void add_at_random(struct node *head);
void delete_at_end(struct node *head);
void delete_at_start(struct node **head);
void delete_at_random(struct node *head);

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 11;
    head->next = NULL;
    add_at_beg(&head);
    add_at_end(head);
    add_at_random(head);
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    delete_at_end(head);
    delete_at_start(&head);
    delete_at_random(head);
    struct node *p2 = head;
    printf("\n");
    while (p2 != NULL)
    {
        printf("%d ", p2->data);
        p2 = p2->next;
    }
}

// inserting
void add_at_beg(struct node **head)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = 22;
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;
}

void add_at_end(struct node *head)
{
    struct node *temp2 = malloc(sizeof(struct node));
    temp2->prev = NULL;
    temp2->next = NULL;
    temp2->data = 33;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp2;
    temp2->prev = temp;
}

void add_at_random(struct node *head)
{
    int position = 3;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = 44;
    struct node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    current->next->prev = temp;
    temp->next = current->next;
    temp->prev = current;
    current->next = temp;
}

void delete_at_end(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    free(ptr->next);
    ptr->next = NULL;
}

void delete_at_start(struct node **head)
{
    struct node *temp = *head;
    (*head) = temp->next;
    (*head)->prev = NULL;
    free(temp);
}

void delete_at_random(struct node *head)
{
    int position = 3;
    struct node *ptr = head;
    struct node *current;

    for (int i = 1; i < position - 1 && ptr->next != NULL; i++)
    {
        ptr = ptr->next;
        ptr->next = current;
    }
    current->next->prev = ptr;
    ptr->next = current->next;
}