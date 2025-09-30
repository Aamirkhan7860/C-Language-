#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])       // INSERTION SORT
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

int main()
{
    int arr[]={5,14,33,-2,1};
    int n=5;
    printf("Before sorting:\n");
    display(arr,n);

    printf("After sorting:\n");
    insertion_sort(arr,n);
    display(arr,n);
}