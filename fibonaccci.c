#include<stdio.h>
 void main()
{
    int n,i,t1=0,t2=1,next_term;
    printf("enter the number of terms ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",t1);
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
}