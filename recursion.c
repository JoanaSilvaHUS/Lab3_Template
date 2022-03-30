#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int arrLength)
{
    printf("[ ");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
}

int min(int x, int y)
{
    return (x<y)?x:y;
}

int arrayMinimum(int arr[], int arrLength)
{
    if (arrLength == 0)
    {
        return -1;
    }

    else if(arrLength == 1)
    {
        return arr[0];
    }

    else 
    {
        return min(arr[arrLength-1], arrayMinimum(arr, arrLength-1));
    }

}

int arraySumEven(int arr[], int arrLength)
{
    if (arrLength == 0)
    {
        return 0;
    }
    else {
        if (arr[arrLength-1]%2 == 0)
        {
            return arr[arrLength-1] + arraySumEven(arr, arrLength-1);
        }
        else
        {
            return arraySumEven(arr, arrLength-1);
        }
    }
}

int binarySearch(int val, int arr[], int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int mid;

    mid = (start+end) / 2;

    if (arr[mid] == val)
    {    return mid; }

    else if (arr[mid] > val)
        { return binarySearch(val, arr, start, mid - 1); }
    else
       { return binarySearch(val, arr, mid+1, end); }
}


int quickSort(int arr[], int low, int high)
{
    double pi;

    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int partition (int arr[],  int low, int high)
{
    // pivot (Element to be placed at right position)
   int pivot = arr[high];  
 
    int i = (low - 1); // Index of smaller element and indicates the 
                   // right position of pivot found so far

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;

}