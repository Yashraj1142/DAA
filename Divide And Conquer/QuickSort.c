// Quick Sort

#include <stdio.h>

int partition(int *, int, int);

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int j = partition(arr, low, high);
        QuickSort(arr, low, j - 1);
        QuickSort(arr, j + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;

    while (i <= j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp1 = arr[j];
    arr[j] = arr[low];
    arr[low] = temp1;

    return j;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    // printing the original array
    printf("Original Array: \t");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }

    QuickSort(arr, 0, n - 1);

    // printing the sorted array
    printf("\nSorted Array: \t");
    for (int k = 0; k < n; k++)
    {
        printf("%d\t", arr[k]);
    }
}