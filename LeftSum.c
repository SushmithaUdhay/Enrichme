#include <stdio.h>
#include<stdlib.h>

int s=0;

struct bintree
{
    int data;
    struct bintree *left;
    struct bintree *right;
};

struct bintree* insert(int num)
{
    struct bintree *node=(struct bintree*)malloc(sizeof(struct bintree));
    node->data=num;
    node->right=NULL;
    node->left=NULL;
    
    return node;
}

int isleaf(struct bintree *node)
{
    
    if(node != NULL && node->left == NULL && node->right == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sum(struct bintree *node)
{
    
    
    if(node == NULL)
    {
        return 0;
    }
    else
    {
        if(isleaf(node->left))
        {
            s=s+node->left->data;
        }
    
        sum(node->left);
        sum(node->right);
    }
    
    return s;
}

int main(void) 
{
    int res;
    struct bintree *root=insert(6);
    root->left=insert(5);
    root->right=insert(4);
    root->left->left=insert(3);
    root->left->right=insert(2);
    root->right->left=insert(7);
    
    res=sum(root);
    printf("%d",res);

	return 0;
}

