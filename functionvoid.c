#include<stdio.h>
void sum();    //function declaration
void main()
{
    sum();  //function calling
}
void sum()  //function defination
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("addition:-%d",c);
}