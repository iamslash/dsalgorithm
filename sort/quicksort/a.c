
/* Time Complexity */
/* - Average : O(NlgN) */


#include <stdio.h>
#include <stdlib.h>

void rand_array(int a[])
{
    for (int i=0; i<10; ++i)
        a[i] = rand() % 10;    
}

void print_array(int a[])
{
    for (int i=0; i<10; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
 
    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
 
    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    int N[10] = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};

    rand_array(N);
    print_array(N);
    
    quickSort(N, 0, 9);
    print_array(N);
    
}
