#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main()
{
    //declare variables of struct
    struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;
     
    //memory allocation
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));

    //assign data values 
    one->data=1;
    two->data=2;
    three->data=3;
    four->data=4;

    //connect nodes 
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;
    head=one; 
    // head=one;

    //traverse through linked list
    struct node* temp=head;
    printf("printing all the elements of linked list\n");
    while(temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    return 0;
}