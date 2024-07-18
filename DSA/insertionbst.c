#include<stdio.h>
#include<malloc.h>
struct binary{
    int data;
    struct binary* left;
    struct binary* right;
};
struct binary* createnode(int data)
{
    struct binary* n;
    n=(struct binary*)malloc(sizeof(struct binary));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void insert(struct binary* root,int key)
{
    struct binary* prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("this  data %d already exist",key);
            return;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct binary* new=createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}
void inorder(struct binary* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct binary* p=createnode(50);
    struct binary* p1=createnode(40);
    struct binary* p2=createnode(60);
    struct binary* p3=createnode(20);
    struct binary* p4=createnode(45);
    struct binary* p5=createnode(55);
    struct binary* p6=createnode(70);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    insert(p,80);
    inorder(p);
    return 0;
}