#include<stdio.h>
int ls_r(int arr[],int n,int x)
{
    if(n==0) {return -1;}
    if(arr[n-1]==x) {return n-1;}
    return ls_r(arr,n-1,x);
}
int main()
{
    int arr[]={4,6,1,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Searching element present at:");
    printf("%d",ls_r(arr,n,2));
}
