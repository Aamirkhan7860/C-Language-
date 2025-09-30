#include<stdio.h>
int sum(int m,int n);    //function declaratin
void main()
{ 
    int m,n,s;
    s=sum(m,n);  //function calling
    printf("addition:-%d",s);
    
}
int sum(int m,int n)  //function defination
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
    
}