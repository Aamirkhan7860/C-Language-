#include<stdio.h>
int sum();    //function declaration
void main()
{ 
    int s;
    s= sum();  //function calling
    printf("addition:-%d",s);
}
int sum()  //function defination
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}