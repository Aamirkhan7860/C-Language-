#include<stdio.h>
 void main()
{
    int i,n,a1[100],a2[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("first array elements");
    for(i=0;i<n;i++)
    {
        printf("%d",a1[i]);
    }
     printf("copying array elements");
     for (i=0;i<n;i++)
     { 
        a2[i]=a1[i];
     }
     printf("second array elements");
     for(i=0;i<n;i++)
    {
        printf("%d",a2[i]);
    }

}