#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node* head1=NULL;
struct node* head2=NULL;
void addx()
{
    struct node *newnode1;
    newnode1 = (struct node *)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d", &newnode1->data);
    newnode1->next = NULL;
    if (head1 == NULL)
    {
        head1 = newnode1;
        newnode1->prev = head1;
    }
    else
    {
        struct node *temp = head1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode1->prev = temp;
        temp->next = newnode1;
    }
    printf("node %d is added\n", newnode1->data);
}
void addy()
{
    struct node *newnode2;
    newnode2 = (struct node *)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d", &newnode2->data);
    newnode2->next = NULL;
    if (head2 == NULL)
    {
        head2 = newnode2;
        newnode2->prev = head2;
    }
    else
    {
        struct node *temp = head2;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode2->prev = temp;
        temp->next = newnode2;
    }
    printf("node %d is added\n", newnode2->data);
}
void displaysx()
{
    if (head1 == NULL)
    {
        printf("list is empty plz enter the new node\n");
        // add();
    }
    else
    {
        struct node *temp = head1;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void displaysy()
{
    if (head2 == NULL)
    {
        printf("list is empty plz enter the new node\n");
        // add();
    }
    else
    {
        struct node *temp = head2;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    addx();
    addx();
    addx();
    printf("linked list X is \n");
    displaysx();
    printf("\n");
    addy();
    addy();
    addy();
    printf("linked list Y is \n");
    displaysy();
    // deletsnode();
    // printf("last node deleted succesfully\n");
    // displays();
    return 0;
}