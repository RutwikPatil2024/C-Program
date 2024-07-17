#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main()
{
    //creating variables of structure
    struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;
    
    //memory allocation
    one=(struct node*)malloc(sizeof(struct node*));
    two=(struct node*)malloc(sizeof(struct node*));
    three=(struct node*)malloc(sizeof(struct node*));
    four=(struct node*)malloc(sizeof(struct node*));  

    //assign data
    one->data=1;
    two->data=2;
    three->data=3;
    four->data=4;

    //connecting
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;
    head=one;

    //creating new node to add at begin
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=5;
    new->next=one;
    head=new;

    printf("printing all the element of linked list\n");
    struct node* temp;
    temp=head;
    while (temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
     
    return 0;
}