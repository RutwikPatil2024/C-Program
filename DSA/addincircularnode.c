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
void addatbegin()
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("enter the data = ");
    scanf("%d",n->data);
    struct node* temp=head;
    n->next=head;
    head=n;

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
    display();
    addatbegin();
    display();
    return 0;
}