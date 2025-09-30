#include<stdio.h>
#include<math.h>
 void main()
 {
    float principle,rate,time,ci;
    printf("enter the principle");
    scanf("%f",&principle);
     printf("enter the rate");
    scanf("%f",&rate);
     printf("enter the time");
    scanf("%f",&time);
    ci=principle*(pow(1+rate/100,time));
    printf("compound interest=%f",ci);

 }