#include<stdio.h>
void main()
{
    int n,c,reverse=0,remainder;
    printf("enter the number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        remainder=n%10;
        reverse=remainder+reverse*10;
        n=n/10;
    }
    if(c==reverse)
    printf("palindrome number");
    else
    printf("not a palindrome number");

}
