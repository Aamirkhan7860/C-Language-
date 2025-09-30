#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int delete_p(int arr[], int n, int x)
{
    int i;
    // Find the element `x` in the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }

    // If the element is not found, return the original size
    if (i == n)
    {
        return n;
    }

    // Shift elements to the left
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    // Return the new size of the array
    return n - 1;
}

int main()
{
    int arr[5] = {10, 11, 12, 13, 14};
    int n = 5;
    int x = 12;

    printf("Array before deletion:\n");
    display(arr, n);

    // Delete the element `x` from the array
    n = delete_p(arr, n, x);

    printf("Array after deletion:\n");
    display(arr, n);

    return 0;
}
