

#include <stdio.h>
#include <stdlib.h>

void rand_array(int a[])
{
    for (int i=0; i<10; ++i)
        a[i] = rand() % 100;    
}

void print_array(int a[])
{
    for (int i=0; i<10; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

/* Hoare partition scheme  */
/* Time Complexity */
/* - Average : O(NlgN) */
void quick_sort_1(int arr[], int left, int right) {
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
        quick_sort_1(arr, left, j);
    if (i < right)
        quick_sort_1(arr, i, right);
}

/* Lomuto partition scheme */
/* Time Complexity */
/* - Average : O(NlgN) */
void swap(int A[], int s, int d)
{
    int t = A[s];
    A[s]  = A[d];
    A[d]  = t;
}
int partition(int A[], int l, int r)
{
    int val_pivot = A[r];
    int i = l;

    for (int j=l; j<r; ++j)
        if (A[j] < val_pivot)
            swap(A, j, i++);
    swap(A, i, r);
    
    return i;
}
void quick_sort_2(int A[], int l, int r)
{
    // base condition
    if (l >= r) return;

    int p = partition(A, l, r);
    quick_sort_2(A, l, p-1);
    quick_sort_2(A, p+1, r);
}

int main()
{
    int N[10] = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};

    rand_array(N);
    print_array(N);
    
    quick_sort_2(N, 0, 9);
    print_array(N);
}
