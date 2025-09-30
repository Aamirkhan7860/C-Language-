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


void bubble_sort_recursive(int arr[], int n) {
    if (n == 1) return;                                    // Base case: only one element, already sorted

    bool swapped = false;

                                                // Perform one pass of Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swapped = true;
        }
    }

                                                            
                                                             // If no swaps happened, array is already sorted
    if (!swapped) return;

    // Recursive call for the remaining (n-1) elements
    bubble_sort_recursive(arr, n - 1);
}



int main()
{
    int arr[]={15,8,4,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Element before sorting:\n");
    display(arr,n);

    bubble_sort_recursive(arr,n);

    printf("Element after sorting:\n");
    display(arr,n);

    return 0;
}