#include<stdio.h>
void main()
{
    int i,j,a[3][3],max,min;
    printf("enter the elements of array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=min=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         if(a[i][j]>max)
         {
            max=a[i][j];
         }
         else if(a[i][j]<min)
         {
            min=a[i][j];
         }
        }
    }
    printf("maximum=%d",max);
    printf("minimum=%d",min);

}