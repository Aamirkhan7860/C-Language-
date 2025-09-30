#include<stdio.h>

int ls(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)  //iteration approach
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int ls_r(int arr[],int n,int x)
{                                        //recursive approach
    if(n==0) {return -1;}
    if(arr[n-1]==x) {return n-1;}
    return ls_r(arr,n-1,x);
}

int main()
{
    int arr[]={4,6,1,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Searching element present at:");
    printf("%d ",ls(arr,n,6));
    printf("%d ",ls_r(arr,n,2));
}