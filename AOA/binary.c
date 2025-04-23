#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 5, 8, 10};
    int target = 10;
    int n = 5;

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        printf("Element found at %d", result);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}