#include<stdio.h>
void sum(int m,int n);    //function declaratin
void main()
{ 
    int m,n;
    sum(m,n);  //function calling
    
}
void sum(int m,int n)  //function defination
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("addition:-%d",c);
    
}