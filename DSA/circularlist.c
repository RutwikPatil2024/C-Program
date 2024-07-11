#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
  
};
int main()
{
    struct node* n1;
    struct node* n2;
    struct node* n3;
    struct node* n4;
    struct node* n5;
    struct node* head;
    n1=(struct node*)malloc(sizeof(struct node)); 
    n2=(struct node*)malloc(sizeof(struct node)); 
    n3=(struct node*)malloc(sizeof(struct node)); 
    n4=(struct node*)malloc(sizeof(struct node)); 
    n5=(struct node*)malloc(sizeof(struct node)); 
    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=head;

    n1->data=10;
    n2->data=20;
    n3->data=30;
    n4->data=40;
    n5->data=50;
    struct node* temp=head;
    // while (temp->next==head)
    // {
    //     printf(" %d ",temp->data);
    //     temp=temp->next;   
    // }
    do
    {
        printf(" %d ",temp->data);
        temp=temp->next;   
    } while (temp!=head);
    

    return 0;
}