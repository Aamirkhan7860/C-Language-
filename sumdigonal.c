#include<stdio.h>
void main()
{
    int i,j,a[3][3],sum=0;
    
    printf("enter the elements of array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
        printf(" the elements of array");
    for(i=0;i<3;i++)
    {   
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    //digonal element
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j||i+j==2)
            {
                sum=sum+a[i][j];

            }
        }
    }  
    printf("sum of digonal element is %d",sum);
}     
    