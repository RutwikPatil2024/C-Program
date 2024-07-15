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
    struct binary* p=createnode(9);
    struct binary* p1=createnode(4);
    struct binary* p2=createnode(11);
    struct binary* p3=createnode(2);
    struct binary* p4=createnode(7);
    struct binary* p5=createnode(5);
    struct binary* p6=createnode(8);
    struct binary* p7=createnode(19);
    struct binary* p8=createnode(14);
    p->left=p1;
    p->right=p2;
    p2->right=p7;
    p7->left=p8;
    p1->left=p3;
    p1->right=p4;
    p4->left=p5;
    p4->right=p6;
    inorder(p);
    return 0;
}