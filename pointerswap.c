#include<stdio.h>
void main()
{  
int a,b,*p,*q;
printf ("enter the number");
scanf("%d %d", &a,&b);
p=&a;
q=&b;
    
// a=a+b;b=a-b;a=a-b;

*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
printf("reversed number %d %d",*p,*q);
}