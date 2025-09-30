#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ms 10

typedef struct Stack
{
    int top;
    int arr[ms];
} stack;

void init(stack *s)
{
    s->top = -1;
}

void push(stack *s, int x)
{
    if (s->top == ms - 1)
    {
        printf("Overflow\n");
        return;
    }
    s->top++;
    s->arr[s->top] = x;
}

int pop(stack *s)
{
    if (s->top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

int poseval(char postfix[])
{
    stack s;
    init(&s);
    for (int i = 0; i < strlen(postfix); i++)
    {
        if (isdigit(postfix[i]))
            push(&s, postfix[i] - '0');
        else
        {
            int op2 = pop(&s);
            int op1 = pop(&s);
            switch (postfix[i])
            {
                case '+':
                    push(&s, op1 + op2);
                    break;
                case '-':
                    push(&s, op1 - op2);
                    break;
                case '*':
                    push(&s, op1 * op2);
                    break;
                case '/':
                    push(&s, op1 / op2);
                    break;
                default:
                    printf("Invalid operator encountered\n");
                    return -1;
            }
        }
    }
    return pop(&s);
}

int main()
{
    char postfix[ms];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);  // Fixed newline and spacing issues
    int res = poseval(postfix);
    printf("Result is %d\n", res);
    return 0;
}