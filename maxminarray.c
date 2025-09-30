#include<stdio.h>
 void main()
 {
    int i,a[100],size,max,min;
    printf("enter the size of an array");
    scanf("%d",&size);
    printf("enter the value of an array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        { min=a[i];

        }
    }
    printf("maximum value of an array:-%d",max);
    printf("minimum value of an array:-%d",min);


 }