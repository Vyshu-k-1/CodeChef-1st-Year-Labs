/*
 * Problem Title:   Array Traversal with Pointers
 * CodeChef Code:  1376016924
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW6/problems/ISCETN02
 * First Submitted: 16 Oct 2026
 * Status:          Accepted (100 pts)
 * Approach:  Read the size of an array, use pointer arithmetic to store the input elements and access each element, 
              then print all array elements using pointers instead of array indexing.    
 */

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
int a[n];
for (i=0;i<n;i++)
scanf("%d",a+i);
for(i=0;i<n;i++)
printf("%d\n",*(a+i));
return 0;
}

