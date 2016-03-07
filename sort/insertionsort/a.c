#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void rand_array(int A[])
{
    for (int i=0; i<10; ++i)
        A[i] = rand() % 100;    
}

void print_array(int A[], int t)
{
    for (int i=0; i<t; ++i)
        printf("\t");
    for (int i=0; i<10; ++i)
        printf("%d ", A[i]);
    printf("\n");
}
void swap(int A[], int s, int d)
{
    int t = A[s];
    A[s]  = A[d];
    A[d]  = t;
}
/* Insertion Sort */
/* Time Complexity : O(N^2) */
void insertion_sort(int A[], int len)
{
    for (int i=1; i<len; ++i)
    {
        int x = A[i];
        int j = i - 1;
        while (j>=0 && A[j]>x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main()
{
    int N[10] = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};

    rand_array(N);
    print_array(N, 0);
    
    insertion_sort(N, 10);
    print_array(N, 0);
}
