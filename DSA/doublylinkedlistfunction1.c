#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void add()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        newnode->prev = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }
    printf("node %d is added\n", newnode->data);
}
void deletsnode() // at end
{
    struct node *temp1 = head;
    struct node *temp2 = head->next;
    while (temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next=NULL;
    free(temp2);
}
void displays()
{
    if (head == NULL)
    {
        printf("list is empty plz enter the new node\n");
        add();
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    add();
    add();
    add();
    displays();
    deletsnode();
    printf("last node deleted succesfully\n");
    displays();
    return 0;
}