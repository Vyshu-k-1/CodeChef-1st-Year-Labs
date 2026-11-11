/*
 * Problem Title:  Sequential Search
 * CodeChef Code:   1384143703
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW11/problems/RCCSDADB25
 * First Submitted: 30 Oct 2026
 * Status:          Accepted (100 pts)
 * Approach:      Read the number of test cases, array size, search element, and array elements; 
                  use a separate Search() function with a for loop to perform linear search
                  and return the 1-based position if the element is found, otherwise return -1.
 */
#include <stdio.h>

// Function to search for an element in the array
int Search(int arr[], int x, int n) {
    int i;
    for(i=0;i<n;i++) {
        if(arr[i] == x)
        return i+1; 
    }
    return -1; // Write your code here
}

int main() {
    int t; 
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n); 
        int x;
        scanf("%d", &x);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", Search(arr, x, n));
    }
    return 0;
}
