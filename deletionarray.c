#include <stdio.h>

void display(int arr[], int n) 
{   
    for (int i=0;i<n;i++) 
    {
      printf("%d\t", arr[i]);
    }
    printf("\n");
}

int delete_p(int arr[], int n, int x) 
{  
    int i;
    for (i = 0; i < n; i++)
     {  
        if (arr[i] == x)
            break;
    }   

    if (i == n)  // If element not found, return original size
        return n;

    for (int j=i; j<n-1; j++) 
    {  
        arr[j] = arr[j+1];
    }
    return n-1;  
}

int main()
 {
    int arr[5] = {10, 11, 12, 13, 14};
    int n = 5;
    int x = 13;
    
    printf("Array before deletion:\n");
    display(arr, n);
    
    n = delete_p(arr, n, x);
    
    printf("Array after deletion:\n");
    display(arr, n);

    return 0;
}
