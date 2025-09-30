#include<stdio.h>
#define ms 5

typedef struct Queue
{
    int arr[ms];
    int front, rear;
}Queue;

void init(Queue *q)
{
    q->front=q->rear=-1;
}

void push(Queue *q,int x)
{
    if(q->rear==ms-1)
    {
        printf("Queue is full \n");
        return;
    }
    q->arr[++q->rear]=x;
    if(q->front==-1)
       q->front=0;
}

void pop(Queue *q)
{
    if(q->front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    if(q->front==q->rear)
       q->front=q->rear=-1;
    else
    q->front++;   
}

void display(Queue *q)
{
    if(q->front==-1)
    {
        return;
    }
    for(int i=q->front;i<=q->rear;i++)
    {
        printf("%d ",q->arr[i]);
    }
    printf("\n");
}

int main()
{
    Queue q;
    init(&q);
    push(&q, 10);
    display(&q);
    push(&q,20);
    display(&q);
    push(&q,30);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
    pop(&q);
    display(&q);
}