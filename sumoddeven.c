#include<stdio.h>
void main()
{
    int n,i,odd_sum=0,even_sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        even_sum=even_sum+i;
        else
        odd_sum=odd_sum+i;
    }
    printf("sum of all odd numbers=%d\n",odd_sum);
    printf("sum of all even numbers=%d",even_sum);
}