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
void preorder(struct binary* root)
{
    if(root!=NULL)
    {
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct binary* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
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
    struct binary* p=createnode(4);
    struct binary* p1=createnode(1);
    struct binary* p2=createnode(6);
    struct binary* p3=createnode(5);
    struct binary* p4=createnode(2);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    // preorder(p);
    // postorder(p);
    inorder(p);
    return 0;
}