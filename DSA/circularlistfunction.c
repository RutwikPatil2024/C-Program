#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
  
};
struct node* head=NULL;
void add()
{
   
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d",&n->data);
    if(head==NULL)
    {
        head=n;
        n->next=head;
    }
    else
    {
        struct node* temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->next=head;

        
    }
    printf("node  %d added\n",n->data);
}
void delete()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node* temp1=head;
        struct node* temp2=temp1->next;
        while (temp2->next!=head)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=head;
        free(temp2);
    }
}
void display()
{
    printf("circular list is = \n");
    struct node* temp=head;
    do
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("\n");
    
}
int main()
{
    add();
    add();
    add();
    add();
    add();
    display();
    delete();
    delete();
    delete();
    display();
    return 0;
}