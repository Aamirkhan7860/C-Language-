#include<stdio.h>
 void main()
 {
    int i,a[10],freq=0,key;
    for(i=0;i<10;i++)
    {
        printf("\n enter number");
        scanf("%d",&a[i]);
    }
    printf("\n enter the number to find frequency");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {freq++;}
         
    }
    printf("\n frequency of %d is %d ",key,freq);
 }