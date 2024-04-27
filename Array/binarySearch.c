#include <stdio.h>

void bubbleSort(int *, int);
void swap(int *, int *);
int binarySearch(int *, int, int);

int main()
{
    int n;
    printf("Enter static boundary:");
    scanf("%d", &n);
    int a[n], i;
    // Taking array input
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //*Sorting the array
    bubbleSort(a, n);
    //* Taking search element
    int searchElem;
    printf("Enter the search element:");
    scanf("%d", &searchElem);
    int foundIndex = binarySearch(a, searchElem, n);
    if (foundIndex == -1)
    {
        printf("Element not found!!");
    }
    else
    {
        printf("Search element %d found at index no  %d", searchElem, foundIndex);
    }
}
void bubbleSort(int p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                swap((p + j), (p + j + 1));
            }
        }
    }
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
int binarySearch(int p[], int searchElem, int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (p[mid] == searchElem)
        {
            return mid;
        }
        else if (p[mid] < searchElem)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}