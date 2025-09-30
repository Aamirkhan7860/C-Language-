#include<stdio.h>
void main()
{
    int n,first,last,sum;
    printf("enter the number");
    scanf("%d",&n);
    last=n%10;
    first=n/100;
    sum=first+last;
    printf("%d",sum);
}