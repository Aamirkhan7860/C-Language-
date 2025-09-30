// CIRCULAR DOUBLY LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node* init(int x) 
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
}

void display(struct node *h)
 {
    struct node *c= h; 
    do
     {
        printf("%d ", c->data);
        c = c->next;
     } while(c!=h);
    printf("\n");
}

struct node* insert_beg(struct node *head, int x) 
{
    struct node *temp = init(x);
    if (head == NULL)
       { return temp; }

     struct node *c=head;
     while(c->next!=head)  
     {
        c=c->next;
     }
     
     c->next=temp;
     temp->prev=c;
     temp->next = head;
     head->prev = temp;
    return temp;
}

struct node* insert_end(struct node *head, int x)
 {
    struct node *temp =init(x);
    if (head == NULL)
       { return temp; }

    struct node *c=head;   
    while (c->next!=head)
       { c = c->next; }

    c->next = temp;
    temp -> prev = c;
    temp->next = head;
    head->prev = temp;
    return head;
}

struct node* insert_pos(struct node *head, int x, int pos)
 {
    struct node *c= head;
    struct node *temp=init(x);
    for (int i = 1; i <= pos-2; i++)
       { c = c->next; }
    
       temp->next=c->next;
       c->next->prev=temp;
       c->next=temp;
       temp->prev=c;
        return head;
 }

 struct node* delete_beg(struct node *head)
 {
    if (head == NULL)
      {  return NULL;  }
    
    if (head->next == NULL)
    {
      free(head);
      return NULL;
    }
    struct node *c=head;
    while(c->next!=head)
    {
        c=c->next;
    }
     struct node *temp=head;
     head=head->next;
     c->next=head;
     return head;
      
}

struct node* delete_end(struct node *head) 
{
    if (head == NULL)
     {   return NULL;  }
    
    if (head->next == NULL)
     {                     // Only one node
        free(head);
        return NULL;
    }

    struct node *c=head;
    while (c->next!=head)
        { c= c->next;}
    
    c->prev->next = head;
    head->prev=c->prev;
    free(c);
    return head;
}

struct node* delete_pos(struct node *head, int pos)
 {
    if (pos == 1)
      {  return delete_beg(head);  }
    

    struct node *c = head;
    
    for (int i = 1; i <=pos-1 ; i++)
      {  c = c->next; }
    
     c->prev->next=c->next;
     c->next->prev=c->prev;
     free(c);
     return head;

 }

    int main()
 {
    struct node *h = init(10);
    struct node *s = init(20);
    struct node *t = init(30);
    struct node *f = init(40);

    h->next=s;
    s->next=t;
    t->next=f;
    f->next=h;
    h->prev=f;
    f->prev=t;
    t->prev=s;
    s->prev=h;
    display(h);

    h=insert_beg(h,50);
    display(h);

    h=insert_end(h,60);
    display(h);

    h=insert_pos(h,100,3);
    display(h);

    h=delete_beg(h);
    display(h);

    h=delete_end(h);
    display(h);

    h=delete_pos(h,3);
    display(h);
    


    return 0;
}



