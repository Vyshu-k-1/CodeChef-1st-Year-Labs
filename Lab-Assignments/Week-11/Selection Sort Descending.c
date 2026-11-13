/*
 * Problem Title:  Selection Sort Descending
 * CodeChef Code:  1390835482
 * Problem Link:   https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW12/problems/SELSORTDESC
 * First Submitted: 13 Nov 2026
 * Status:          Accepted (100 pts)
 * Approach:   Find the largest element in the unsorted portion of the array and 
               swap it with the first element of that portion,repeating until the array is sorted in descending order.  
 */

#include <stdio.h>

void selectionSort(int A[], int N) {
   
    int i,j,temp,max;
    for(i=0;i<N;i++) {
        max=i;
        for(j=i+1;j<N;j++) {
            if(A[max]<A[j])
            max=j;
        }
        if(max!=i) {
            temp=A[i];
            A[i]=A[max];
            A[max]=temp;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    selectionSort(A, N);

    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
