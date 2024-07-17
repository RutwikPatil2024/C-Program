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

    // creating new node to add at end
    struct node* mid;
    mid=(struct node*)malloc(sizeof(struct node));
    mid->data=10;
    // mid->next=NULL;
    

    
    struct node* temp;
    temp=head;
    while (temp->data==2)
    {
        temp=temp->next;
    }
    temp->next=mid;
    
    
    

    printf("printing all the element of linked list\n");
    struct node* abc;
    abc=head;
    while (abc!=NULL)
    {
        printf(" %d ",abc->data);
        abc=abc->next;
    }
     
    return 0;
}