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
void addatbegin()
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("enter the data  to add a new node n at begin = ");
    scanf("%d",n->data);
    
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
    display();
    add();
    add();
    add();
    display();
    addatbegin();
    display();
    return 0;
}