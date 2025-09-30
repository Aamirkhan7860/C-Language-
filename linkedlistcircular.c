// circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* init(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void display(struct node *h)
{
    struct node *c=h;
    printf("%d ", c->data);
        c = c->next;

    while (c!=h)
    {
        printf("%d ", c->data);
        c = c->next;
    }
    printf("\n");
}

struct node* ins_beg(struct node *h, int x)
{
    struct node *temp=init(x);
    if (h == NULL)
    {
        temp->next=temp;
        return temp;
    }
    struct node *c=h;
    while(c->next!=h)
    {
        c=c->next;
    }
    c->next=temp;
    temp->next = h;
    return temp;
}

struct node* ins_end(struct node *h, int x)
{
    struct node *temp = init(x);
    struct node *c=h;
    if (h == NULL)
    {
        temp->next=temp;
        return temp;
    }

    while(c->next!=h)
    {
        c=c->next;
    }
    c->next=temp;
    temp->next = h;
    return h;
}

struct node* ins_pos(struct node *h, int x, int pos)
{
    struct node *temp = init(x);
    struct node *c=h;
    for (int i = 1; i <= pos - 2; i++)
    {
        c = c->next;
    }
    temp->next = c->next;
    c->next = temp;
    return h;
}

struct node* del_beg(struct node *h)
{
    struct node *c=h;
    {
        if(h==NULL)
        {
            return h;
        }
    }
    
      while(c->next!=h)
    {
        c=c->next;
    }
    c->next=h->next;
    free(h);
    return h;
}    

struct node* del_end(struct node *h)
{
    struct node *c=h;
    {
        if(h==NULL)
        {
            return h;
        }
    }
    
      while(c->next->next!=h)
    {
        c=c->next;
    }
    struct node* temp=c->next;
    c->next=c->next->next;
    free(temp);
    return h;
} 

struct node* del_pos(struct node *h, int pos)
{
    struct node *c=h;
    if(h==NULL)
        {
            return h;
        }
    for (int i = 1; i <= pos - 2; i++)
    {
        c = c->next;
    }
    struct node *temp=c->next;
    c->next=c->next->next;
    free(temp);
    return h;
}

int main()
{

    struct node *h=init(10);
    struct node *f=init(20);
    struct node *s=init(30);
    struct node *t=init(40);
    h->next=f;
    f->next=s;  
    s->next=t;
    t->next=h;
    display(h);
    h=ins_beg(h,50);
    display(h);
    h=ins_end(h,60);
    display(h);
    h=ins_pos(h,100,3);
    display(h);
    h=del_beg(h);
    display(h);
    h=del_end(h);
    display(h);
    h=del_pos(h,3);
    display(h);
    
}
