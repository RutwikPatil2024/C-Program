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
void inorder(struct binary* root){
    if (root!=NULL)
    {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}
struct binary* inorderpredecessor(struct binary* root){
    root=root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
void insertion(struct binary* root,int value){
    struct binary* prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(value==(root->data)){
            printf("This value already exist");
            return ;
        }
        else if(value>(root->data)){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    struct binary* new =create(value);
    if(value<prev->data){
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}
struct binary* deletenode(struct binary* root,int key)
{
    struct binary* ipre;
    if(root==NULL){
        return NULL;
    }   
    if(root->left==NULL && root->right==NULL){
        //it is leaf node
        free(root);
    }
    if(key<(root->data)){
        root->left=deletenode(root->left,key);
    }
    else if(key>(root->data)){
        root->right=deletenode(root->right,key);
    }
    else
    {
        //fining inorder predecessor
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        deletenode(root->left,ipre->data);
    }
    return root;
}
int main()
{
    struct binary* p=create(50);
    insertion(p,40);
    insertion(p,60);
    insertion(p,20);
    insertion(p,45);
    insertion(p,55);
    insertion(p,70);
    inorder(p);
    deletenode(p,70);
    printf("\n");
    inorder(p);
    return 0;
}