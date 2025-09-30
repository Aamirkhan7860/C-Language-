#include<stdio.h>
void main()
{
    int *p,*q,r,a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    r=*p+*q;
    printf("sum of numbers: %d",r);

}