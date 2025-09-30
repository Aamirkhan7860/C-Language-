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

void push(Queue *q, int x)
{
    if((q->front==0 && q->rear==ms-1) || (q->rear==q->front-1))
    {
        printf("Queue is full \n");
        return;
    }
    q->rear=(q->rear + 1) % ms;
    q->arr[q->rear]=x;
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
   {
     (q->front) % ms;
   }   
}

void display(Queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    if (q->rear >= q->front)
    {
        for (int i = q->front; i <= q->rear; i++)
            printf("%d ", q->arr[i]);
    }
    else
    {
        for (int i = q->front; i < ms; i++)  // From front to end
            printf("%d ", q->arr[i]);
        for (int i = 0; i <= q->rear; i++)  // From 0 to rear
            printf("%d ", q->arr[i]);
    }
    printf("\n");
}


int main()
{
    Queue q;
    init(&q);
    for(int i=1;i<=6;i++)
    {
        push(&q, i);
        display(&q);
    }
    for(int i=1;i<=3;i++)
    {
        pop(&q);
        display(&q);
    }
    for(int i=7;i<=10;i++)
    {
        push(&q,i);
        display(&q);
    }
}