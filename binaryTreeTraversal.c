#include<stdio.h>
#include<stdlib.h>

struct btree
{
    int data;
    struct btree *right;
    struct btree *left;
};

struct btree* insert(int num,struct btree *tree)
{
    if(tree == NULL)
    {
        struct btree *temp=(struct btree*)malloc(sizeof(struct btree));
        temp->data=num;
        temp->left=NULL;
        temp->right=NULL;
        tree=temp;
       // printf("%d",tree->data);
    }
    else
    {
        if(num>tree->data)
        {
            tree->right = insert(num,tree->right);
            
        }
        else if(num<tree->data)
        {
            tree->left = insert(num,tree->left);
        }
        else
        {
            printf("Number exists\n");
        }
    }
    return tree;
}

void inorder(struct btree *tree)
{
    if(tree)
    {
        inorder(tree->left);
        printf("%d\t",tree->data);
        inorder(tree->right);
    }
   
}

void preorder(struct btree *tree)
{
    if(tree)
    {
        printf("%d\t",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
   
}

void postorder(struct btree *tree)
{
    if(tree)
    {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d\t",tree->data);
    }
    
}

int main()
{
    struct btree *root=NULL;
    root=insert(5,root);
    root=insert(2,root);
    root=insert(3,root);
    
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}
