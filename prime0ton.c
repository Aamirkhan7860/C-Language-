#include<stdio.h>
void main()
 {
    int n,i,j,f,m;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i;
        f=0;
        for(j=2;j<=m;j++)
        {
            if(m%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("\n %d is prime",m);
        }
        
    
    }
 
 }