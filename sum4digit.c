#include<stdio.h>
 void main()
 {
    int n,firstdigit,lastdigit,sum;
    printf("enter the 4 digit number");
    scanf("%d",&n);
    lastdigit=n%10;
    firstdigit=n/1000;
    sum=firstdigit+lastdigit;
    printf("sum of first and last digit:-%d\n",sum);
 }