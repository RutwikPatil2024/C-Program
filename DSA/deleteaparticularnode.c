#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void add()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newnode;
    }
    printf("Node %d is added\n",newnode->data);
}
void delete(int val)
{
    struct node* temp1=head;
    struct node* temp2=temp1->next;
    while (temp2->data!=val)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    free(temp2);
    
}
void display()
{
    
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("list is \n");
        struct node* temp=head;
        while(temp!=NULL)
        {
            printf(" %d \n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int value;
    add();
    add();
    add();
    add();
    display();
    printf("enter the node you want to delete = ");
    scanf("%d",&value);
    delete(value);
    display();
    return 0;
}