#include<stdio.h>
#define ms 5

typedef struct  stack 
{
    int arr[ms];
    int top;
    int size;
}stack;


void init(stack *s)
{
    s -> top=-1;
    s -> size=0;
}

void push(stack *s,int x)                    // OVERFLOW
{
    if(s->top==ms-1)
    {
        printf("OVERFLOW \n");
        return;
    }
    s -> top++;
    s -> arr[s->top]=x;
    s -> size++;

    for (int i=0;i<= s->top;i++)
     { 
            printf("%d ",s->arr[i]);
     }
        printf("\n");      
}

void pop(stack *s)                         //UNDERFLOW
{
    if(s-> top==-1)
    {
        printf("UNDERFLOW \n");
        return;
    }
    s -> top--;
    s -> size--;

    for (int i=0; i<=s->top;i++)
        {
           printf("%d ",s->arr[i]);
        }
        printf("\n");
        
}

int peek(stack *s)
{
    if (s->top == -1)
 {
   printf("Stack is empty\n");
   return -1;
 }
  return s-> arr[s->top];
}


int getsize(stack *s)
{
  return s->size;
}


int main()
{
    stack s;
    init(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    pop(&s);
    pop(&s);

    printf("%d\n", peek(&s));
    printf("%d\n", getsize(&s));  
}

