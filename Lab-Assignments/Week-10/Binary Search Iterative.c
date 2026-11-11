/*
 * Problem Title:  Binary Search Iterative
 * CodeChef Code:  1385650878
 * Problem Link:   https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW11/problems/BINSEARCHIT
 * First Submitted: 2 Nov 2026
 * Status:          Accepted (100 pts)
 * Approach:    Read a sorted array and the number of search queries, 
                then use an iterative binary search with a while loop to repeatedly divide the search range into two halves until the key is found 
                or the range becomes empty,and print the index or "Not Found".  
 */

#include <stdio.h>
#include <stdlib.h>

// Non-recursive function to perform binary search
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found, return its 0-based index
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    int t;
    if (scanf("%d", &t) != 1) {
        free(arr);
        return 0;
    }

    while (t--) {
        int key;
        if (scanf("%d", &key) != 1) break;

        int result = binarySearchIterative(arr, n, key);

        if (result != -1) {
            printf("Found at index %d\n", result);
        } else {
            printf("Not Found\n");
        }
    }

    free(arr);
    return 0;
}
