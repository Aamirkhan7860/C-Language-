#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ms 10

// Define a stack structure
typedef struct stack 
{
    int top;
    char items[ms];
} Stack;

// Function to push an item onto the stack
void push(Stack *s, char item)
 {
    if (s->top == ms-1)
     {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
     }
    s->items[++s->top] = item;
}

// Function to pop an item from the stack
char pop(Stack *s)
 {
    if (s->top == -1) 
    {
        return '\0';                                               // Return a special character instead of exiting
    }
    return s->items[s->top--];
}

// Function to check if a character is an operator
int isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of an operator
int precedence(char ch) 
{
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;                                                                         // for '('
}

// Function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[])
 {
    Stack s;
    s.top = -1; // Initialize stack top

    int i, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++)
     {
        if (isalnum(infix[i]))
         {                                                     // If operand, add it to postfix
            while (isalnum(infix[i])) 
            {                                                  // Handle multi-character operands
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';                                // Add space to separate operands
            i--;                                              // Adjust index after loop
        } 
        else if (infix[i] == '(') 
        {
            push(&s, infix[i]);
        } 
        else if (infix[i] == ')')
         {
            while (s.top != -1 && s.items[s.top] != '(')
             {
                postfix[j++] = pop(&s);
                postfix[j++] = ' ';
            }
            pop(&s);                                           // Pop '('
        } 
        else if (isOperator(infix[i])) 
        {
            while (s.top != -1 && precedence(s.items[s.top]) >= precedence(infix[i])) 
            {
                postfix[j++] = pop(&s);
                postfix[j++] = ' ';
            }
            push(&s, infix[i]);
        }
    }

    // Pop remaining operators from the stack
    while (s.top != -1) 
    {
        postfix[j++] = pop(&s);
        postfix[j++] = ' ';
    }

    postfix[j-1] = '\0';                                             // Null-terminate the postfix expression
}

int main()
 {
    char infix[ms], postfix[ms];

    // Input infix expression
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);                           // Use fgets to handle spaces and multi-character input
    infix[strcspn(infix, "\n")] = '\0';                          // Remove newline character

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Display the postfix expression
    printf("Postfix expression: %s\n", postfix);

    return 0;
 }
