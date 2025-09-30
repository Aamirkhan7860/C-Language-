#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node 
{
   int data;
   struct Node *left, *right;
};  
   
// Create a new node
struct Node* init(int key)
{
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = key;
     newNode->left = newNode->right = NULL;
     return newNode;
}


// Insert a key into BST
struct Node* insert(struct Node* root, int x)
 {
     if (root == NULL)
     {return init(x);}

     if (x < root->data)
     root->left=insert(root->left, x);
     else if (x > root->data)
     root->right=insert(root->right, x);
     return root;
}

// Search a key in BST
struct Node* search(struct Node* root, int key)
 { 
    if (root == NULL || root->data == key)
       return root;

    if (key <root->data)
       return search(root->left, key);
     
    else
       return search(root->right, key);
 }  

// Find minimum value node (for deletion)
struct Node* minValueNode(struct Node* node) 
{
   struct Node* current = node;
   while (current && current->left != NULL)
   current= current->left;
   return current;
}

// Delete a key from BST
struct Node* deleteNode(struct Node* root, int key)
 {
    if (root == NULL)
    return root;

    if (key< root->data)
    root->left = deleteNode(root->left, key);
    else if (key > root->data)
    root->right = deleteNode(root->right, key);

    else {
          // Node with only one child or no child
            if (root->left == NULL)
             {
               struct Node* temp = root->right;
               free(root);
               return temp;
             }

    else if (root->right == NULL)
     {
           struct Node* temp = root->left;
           free(root);
           return temp;
     }

// Node with two children: Get inorder successor
   struct Node* temp = minValueNode(root->right);
   root->data = temp->data;
   root->right = deleteNode(root->right, temp->data);
   }
    return root;
}

// Inorder traversal
void inorder(struct Node* root)
{
    if (root != NULL) 
    {
      inorder(root->left);
      printf("%d ", root->data);
      inorder(root->right);
    }
}

// Main function to test the BST
int main() 
{
    struct Node* root = NULL;
    
    // Insert elements
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");
    
    // Search test
    int key = 40;
    if (search(root, key))
    printf("Key %d found in BST.\n", key);
    else
    printf("Key %d not found in BST.\n", key);
    
    // Delete test
    root= deleteNode(root, 50);
    printf("Inorder after deleting 50: ");
    inorder(root);
    printf("\n");

    return 0;
}