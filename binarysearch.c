#include<stdio.h>

int bs(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;       //ITERATION APPROACH
        if(arr[mid]==x) 
        {return mid;}
        else if(arr[mid]<x) 
        {low=mid+1;}
        else 
        {high=mid-1;}
    }
    return -1;
}

int bs_r(int arr[],int n,int x,int l,int h)       //RECURSIVE APPROCH
{
    if(l>h) {return -1;}
    int mid=(l+h)/2;
    if(arr[mid]==x)
     {return mid;}
    else if(x<arr[mid])
    { return bs_r(arr,n,x,l,mid-1);}
    else
    { return bs_r(arr,n,x,mid+1,h); }
}

int main()
{
    int arr[]={11,13,15,17,19,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=17;
    printf("searching element present at:");
    printf("%d ",bs(arr,n,x));
    printf("%d ",bs_r(arr,n,x,0,n-1));
}