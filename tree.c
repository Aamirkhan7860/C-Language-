#include<stdio.h>
#include<stdlib.h>

struct node
 {
    int data;
    struct node *left;
    struct node *right;
};

struct node* init(int x)
 {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preorder(struct node *root)
 {
    if(root != NULL)
     {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *head) 
{
    if(head != NULL) 
    {
        postorder(head->left);
        postorder(head->right);
        printf("%d ", head->data);
    }
}

void inorder(struct node *head) 
{
    if(head != NULL)
     {
        inorder(head->left);
        printf("%d ", head->data);
        inorder(head->right);
    }
}

int getLeafNodes(struct node *head) 
{
    if(head == NULL) 
    {
        return 0;
    }
    if(head->left == NULL && head->right == NULL)
     {
        return 1;
     }
    return getLeafNodes(head->left) + getLeafNodes(head->right);
}

int getSize(struct node *head)
 {
    if(head == NULL)
     {
        return 0;
     }
    return (getSize(head->left) + getSize(head->right) + 1);
}

int maxx(int a, int b) 
{
    return (a > b) ? a : b;
}

int getHeight(struct node *head) 
{
    if(head == NULL)
     {
        return 0;
     }
    return (maxx(getHeight(head->left), getHeight(head->right)) + 1);
}

int main()
 {
    struct node *head   = init(10);
    struct node *first  = init(20);
    struct node *second = init(30);
    struct node *third  = init(40);
    struct node *fourth = init(50);

    head->left = first;
    head->right = second;
    first->left = third;
    first->right = fourth;

    printf("Preorder:\n");
    preorder(head);
    printf("\n");

    printf("Postorder:\n");
    postorder(head);
    printf("\n");

    printf("Inorder:\n");
    inorder(head);
    printf("\n");

    printf("Size of tree: %d\n", getSize(head));
    printf("Height of the tree: %d\n", getHeight(head));
    printf("Leaf Nodes count of the tree: %d\n", getLeafNodes(head));

    return 0;
}
