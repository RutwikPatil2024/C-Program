#include<stdio.h>
#include<malloc.h>
struct binary{
    int data;
    struct binary* left;
    struct binary* right;
};
struct binary* create(int data){
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
int isbst(struct binary* root)
{
    static struct binary* prev=NULL;
    if(root!=NULL)
    {
        if(!isbst(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        isbst(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct binary* p=create(50);
    struct binary* p1=create(40);
    struct binary* p2=create(60);
    struct binary* p3=create(20);
    struct binary* p4=create(45);
    struct binary* p5=create(55);
    struct binary* p6=create(70);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    
    // inorder(p);
    int a=isbst(p);
    if(a==1)
    {
        printf("the tree is binary search tree");
    }
    else
    {
        printf("tree is not binary search tree");
    }
    return 0;
}