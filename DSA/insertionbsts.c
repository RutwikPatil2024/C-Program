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
void insertion(struct binary* root,int key){
    struct binary* prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(key==root->data){
            printf("this data cannot be inserted\n");
            return ;
        }
        else if(key<(root->data)){
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct binary* b=create(key);
    if(key<prev->data){
        prev->left=b;
        printf("\n%d element added sucessfully\n",key);
    }
    else
    {
        prev->right=b;
        printf("\n%d element added sucessfully\n",key);
    }
}
int main()
{
    struct binary* p=create(50);
    // struct binary* p1=create(40);
    // struct binary* p2=create(60);
    // struct binary* p3=create(20);
    // struct binary* p4=create(45);
    // struct binary* p5=create(55);
    // struct binary* p6=create(70);

    // p->left=p1;
    // p->right=p2;
    // p1->left=p3;
    // p1->right=p4;
    // p2->left=p5;
    // p2->right=p6;
    inorder(p);
    insertion(p,40);
    insertion(p,60);
    insertion(p,20);
    insertion(p,45);
    insertion(p,55);
    insertion(p,70);
    inorder(p);
    return 0;
}