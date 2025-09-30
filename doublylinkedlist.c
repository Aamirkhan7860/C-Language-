#include <stdio.h>
#include <stdlib.h>

// Structure for a Doubly Linked List Node
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

void swapp(struct node *a,struct node *b)
{
    struct node *temp=a;
    a=b;
    b=temp;
}

// Function to create a new node  //n=newnode
struct node* init(int x) 
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

// Function to display the linked list
void display(struct node *h)
 {
    struct node *c= h;
    
    while (c)
     {
        printf("%d ", c->data);
       { c = c->next;}
     }
    printf("\n");
}

// **Insertion at Beginning**
struct node* insert_b(struct node *head, int x) 
{
    struct node *temp = init(x);
    if (head == NULL)
       { return temp; }
       
    temp->next = head;
    head->prev = temp;
    return temp;
}

// **Insertion at End**
struct node* insert_End(struct node *head, int x)
 {
    struct node *c =head;
    while (c->next)
       { c = c->next; }

    struct node *temp=init(x);
    c->next = temp;
    temp -> prev = c;
    return head;
}

// **Insertion at a Specific Position**
struct node* insert_p(struct node *head, int x, int pos)
 {
    struct node *c= head;
    for (int i = 1; i <= pos - 2; i++)
       { c = c->next; }
    
       struct node *temp=init(x);
       temp->next=c->next;
       c->next->prev=temp;
       c->next=temp;
       temp->prev=c;
        return head;
    }

// **Deletion from Beginning**
struct node* delete_b(struct node *head)
 {
    if (head == NULL)
      {  return NULL;  }
    
    if (head->next == NULL)
    {
      free(head);
      return NULL;
    }
    else
    {
        struct node *temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        return head;
    }  
}

// **Deletion from End**
struct node* delete_l(struct node *head) 
{
    if (head == NULL)
     {   return NULL;  }
    
    if (head->next == NULL)
     {                         // Only one node
        free(head);
        return NULL;
    }

    struct node *c=head;
    while (c->next)
        { c= c->next;}
    
    c->prev->next = NULL;
    free(c);
    return head;
}

// **Deletion from a Specific Position**
struct node* delete_pos(struct node *head, int pos)
 {
    if (head == NULL)
      {  return NULL;  }
    
      if(head->next==NULL)
      {
        free(head);
        return NULL;
      }
    struct node *c = head;
    
    for (int i = 1; i <=pos-2 ; i++)
      {  c = c->next; }
    
     struct node *temp=c->next;
     c->next=c->next->next;
     temp->next->prev=c;
     free(temp);
     return head;
 }

    struct node *rev(struct node *head)
    {
        struct node *c=head;
        struct node *temp;
        while(c)
        {
            temp=c->prev;
            c->prev=c->next;
            c->next=temp;
            c=c->prev;
        }
        return temp->prev;
    }


int main()
 {
    struct node *head = init(10);
    struct node *f1 = init(20);
    struct node *f2 = init(30);
    head->next=f1;
    f1->next=f2;
    f2->prev=f1;
    f1->prev=head;
    display(head);

    head=insert_b(head,5);
    display(head);

    head=insert_End(head,45);
    display(head);

    head=insert_p(head,65,3);
    display(head);

    head=delete_b(head);
    display(head);

    head=delete_l(head);
    display(head);

    head=delete_pos(head,3);
    display(head);
    
    return 0;
}
