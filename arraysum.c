#include<stdio.h>
 void main()
{
    int i,a[5],sum=0;
    printf("enter the array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("sum of array elements");
        for(i=0;i<5;i++)
        {
            sum=sum+a[i];
        }
        printf("%d",sum);

}