#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int arr[],int p,int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(arr[j]<x)
          { 
           i=i+1;
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
          }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}

void quicksort(int arr[],int p,int r)
{
    if(p>=r)
    return;
    int q=partition(arr,p,r);
    quicksort(arr,p,q-1);
    quicksort(arr,q+1,r);
}

int main()
{
    int arr[]={13,4,7,55,12};
    int n=5;
    printf("Before sorting:\n");
    display(arr,n);

    quicksort(arr,0,n-1);
    printf("After sorting:\n");
    display(arr,n);
}