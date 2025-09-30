#include<stdio.h>
void main()
{
    int i,j,m,a[3][3];
    printf("enter elements of array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    m=maximum(a[i][j]);
    printf("\n maximum=%d",m);
     m=minimum(a[i][j]);
    printf("\n minimum=%d",m);
}