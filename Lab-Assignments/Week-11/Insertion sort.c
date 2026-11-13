/*
 * Problem Title:  Insertion sort
 * CodeChef Code:  1390842269
 * Problem Link:   https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW12/problems/FFFFW481
 * First Submitted: 13 Nov 2026
 * Status:          Accepted (100 pts)
 * Approach:    Take each element and insert it into its correct position in the already sorted portion of the array
                by shifting larger elements one position to the right. 
 */

#include <stdio.h>

void insertionSort(int arr[], int n) {  
   int i,j,k;
   for(i=0;i<n;i++) {
       k=arr[i];
       j=i-1;
       while(j>=0 &&arr[j]>k) {
           arr[j+1] = arr[j];
           j=j-1; }
           arr[j+1] =k;
   }// Write your code here
}

int main() {
    int n;
    scanf("%d", &n); // Input number of elements directly
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements directly
    }

    insertionSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
