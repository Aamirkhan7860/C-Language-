#include<stdio.h>
void main()
{
    long long n;
    int count=0;
    printf("enter the number");
    scanf("%lld",&n);
    do
    {
        n=n/10;
        ++count;
    } while (n!=0);
    printf("number of digits:-%d",count);
    
}