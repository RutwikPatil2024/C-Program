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
struct binary* search(struct binary* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        // return search(root->left,key);
        search(root->left,key);

    }
    else
    {
        // return search(root->right,key);
        search(root->right,key);

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
    struct binary* val=search(p,70);
    if(val!=NULL)
    {
        printf("Element found : %d",val->data);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}