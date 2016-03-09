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
/* Selection Sort */
/* Time Complexity : O(N^2) */
void selection_sort(int A[], int len)
{
    for (int i=0; i<len; ++i)
    {
        for (int j=i+1; j<len; ++j)
        {
            
        }
        swap(A, 
    }
}

int main()
{
    int N[10] = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};

    rand_array(N);
    print_array(N, 0);
    
    selection_sort(N, sizeof(N) / sizeof(N[0]));
    print_array(N, 0);
}
