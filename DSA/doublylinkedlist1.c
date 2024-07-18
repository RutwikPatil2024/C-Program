#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
int main()
{
    //variables declaration
    struct node* head=NULL;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;
    struct node* five;

    //mamory allocation
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));
    
    //data assign
    one->data=10;
    two->data=20;
    three->data=30;
    four->data=40;
    
    //linking nodes
    head=one;
    one->prev=head;
    one->next=two;

    two->prev=one;
    two->next=three;

    three->prev=two;
    three->next=four;

    four->prev=three;
    four->next=NULL;

   
    //printing all nodes in straight forward
    // struct node* temp=head;
    // while(temp!=NULL)
    // {
    //     // printf(" %d ",temp->data);
    //     temp=temp->next;
    // }
    // printf("\n");
    struct node* temp=three;
    while(temp==NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->prev;
    }
   return 0;   
}