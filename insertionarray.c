#include<stdio.h>

void display(int arr[],int n)
{   
    for(int i=0;i<n;i++)
    {
      printf("%d\t",arr[i]);
    }
    printf("\n");
}

int insert_p(int arr[],int n, int x,int p)
{  
    for(int i=n-1;i>=p-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p-1]=x;
    return n+1;
}

int main()
{
    int arr[]={10,11,12,13,14};
    int n=5;
    int x=15;
    int p=2;
    printf("Array before insertion:-\n");
    display(arr,n);
    n=insert_p(arr,n,x,p);
    printf("Array after insertion:-\n");
    display(arr,n);
    return 0;
}