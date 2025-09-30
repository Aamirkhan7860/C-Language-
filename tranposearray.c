#include<stdio.h>
void main()
{
    int i,j,a[3][3],b[3][3];
    printf("enter the value of array:-");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
 
        }
    }
    printf("array elements are");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
           printf("%d",a[i][j]);
           printf("\n");
 
        }
    }
       
    
    
    for(i=0;i<3;i++)
    {
        printf("\n");
        
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
           printf("%d\t",b[j][i]);
           
 
        }
        printf("\n");
    }
    printf("transpose matrix are");
     for(i=0;i<3;i++)
    {
        
        
        for(j=0;j<3;j++)
        {
            
           printf("%d\t",b[i][j]);
 
        }
        printf("\n");
    }
}