#include<stdio.h>
 void main()
 {
    int i,a[10],n,search;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n printing array elements ");
    for(i=1;i<=n;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\n enter the search elements");
    scanf("%d",&search);
    for(i=1;i<=n;i++)
    {
        if(a[i]==search)
        {
            printf("\n search element is %d is found at position %d",search,i);
        }
    }
 }