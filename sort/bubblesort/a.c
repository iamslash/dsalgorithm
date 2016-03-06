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
/* Bubble Sort */
/* Time Complexity : O(N^2) */
void bubble_sort(int A[], int len)
{
    bool b_swap = true;

    while(b_swap)
    {
        b_swap = false;

        for (int i=1; i<len; ++i)
        {
            if (A[i-1] > A[i])
            {
                swap(A, i, i-1);
                b_swap = true;
            }
        }
        /* print_array(A, 1); */
    }
}

int main()
{
    int N[10] = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};

    rand_array(N);
    print_array(N, 0);
    
    bubble_sort(N, 10);
    print_array(N, 0);
}
