/*
 * Problem Title:  Implement Bubble Sort
 * CodeChef Code:  1390818251
 * Problem Link:   https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW12/problems/SESO16
 * First Submitted: 13 Nov 2026
 * Status:          Accepted (100 pts)
 * Approach:    Compare adjacent elements and swap them if they are in the wrong order,
                 repeating the process until the array is sorted in ascending order.  
 */
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>=arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }// Complete this function.
}

int main() {
    int n;
    scanf("%d", &n); // Input number of elements directly
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements directly
    }

    bubbleSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
