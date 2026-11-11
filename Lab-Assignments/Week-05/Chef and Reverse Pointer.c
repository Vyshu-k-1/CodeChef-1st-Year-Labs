/*
 * Problem Title:  Chef and Reverse Pointer
 * CodeChef Code:   1384139749
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW6/problems/C9QUE02
 * First Submitted: 30 Oct 2026
 * Status:          Accepted (100 pts)
 * Approach:   Read the number of test cases, store the elements of each array using a for loop, 
               then traverse the array in reverse order and print the elements to display the array in reverse.   
 */

#include <stdio.h>

int main() {
long int a[2000];
int tc,n,i,k;
scanf("%d",&tc);
for(i=0;i<tc;i++)
{
    scanf("%d",&n);
    for(k=0;k<n;k++) {
    scanf("%ld",&a[k]); }
    for(k=n-1;k>=0;k--) {
    printf("%ld ",a[k]);
    }
    printf("\n");
}
return 0;
}
