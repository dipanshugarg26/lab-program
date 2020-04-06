#include <stdio.h>
#include<stdlib.h>

typedef struct node

            {

                int data;

                struct node *left;

                struct node *right;
            }Node;
int *create()

{
 int t;

Node *newnode=(Node*)malloc(sizeof(Node));

 printf("Enter the data for the nodes(-1 for no data)");



 scanf("%d", &t);
 if(t==-1)

 {

     return NULL;

}

      newnode->data=t;

      printf("Enter the left child data rooted at %d \n",newnode->data);

      newnode->left=create();

      printf("Enter the right child data rooted at %d\n",newnode->data);

      newnode->right=create();

      return newnode;

}

void traverse(Node *x)

{
    if(!x==NULL)

    {
    printf("Left child data is %d ",x->data);

       traverse(x->left);

       x=x->right;

      }
   if(x!=NULL)

      {
       printf("Right child data is %d\n",x->data);

       traverse(x->right);

      }

}

void Inorder(Node *y)
{
    if(y)
    {
    Inorder(y->left);
    printf(" %d",y->data);
    Inorder(y->right);
    }
}

void Postorder(Node *z)
{
    if(z)
    {
    Postorder(z->left);
    Postorder(z->right);
    printf(" %d",z->data);
    }
}

void Preorder(Node *a)
{
    if(a)
    {
    printf(" %d",a->data);
    Preorder(a->left);
    Preorder(a->right);
    }
}
void Double(Node *b)
{
    if(b)
    {
        printf("%d ",b->data);
        Double(b->left);
        printf("%d ",b->data);
        Double(b->right);
    }
}




int main()

{

Node *root=create();

Node *t=root;

printf("Root child is %d\n ",t->data);

printf("\nPreorder traversing is\n");
Preorder(t);
printf("\nInorder traversing is\n");
Inorder(t);
printf("\nPostorder traversing is\n");
Postorder(t);
printf("\nDouble order traversing is\n");
Double(t);


}
