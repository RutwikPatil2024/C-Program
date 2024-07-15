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
int main()
{
    struct binary* p=createnode(2);
    struct binary* p1=createnode(1);
    struct binary* p2=createnode(4);

    //linking
    p->left=p1;
    p->right=p2;
    return 0;
}