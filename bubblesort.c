#include<stdio.h>
#include<stdbool.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {   
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
           
        }
         if(flag==true)
             {
                break;
             }
    }
}

int main()
{
    int arr[]={15,8,4,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    printf("Element before sorting:\n");
    display(arr,n);

    bubble_sort(arr,n);

    printf("Element after sorting:\n");
    display(arr,n);

    return 0;
}