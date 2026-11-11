/*
 * Problem Title:   Minimum Maximum and Average in Array
 * CodeChef Code:   1385655144
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW5/problems/MINMAXAVGARR
 * First Submitted: 2 Nov 2026
 * Status:          Accepted (100 pts)
 * Approach:      Read n integers into an array, use separate for loops to find the smallest and largest elements,
                   calculate the average by dividing the sum of all elements by n, and display the minimum, maximum, and average.
 */

#include<stdio.h>
int main() {
    int n,i,l,s;
    float avg,sum=0.0;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    l=m[0];
    for(i=0;i<n;i++) 
    {
        if(l<m[i])
        {
            l=m[i];
        }
    }
    s=m[0];
    for(i=0;i<n;i++)
    {
        if(s>m[i]) 
        {
            s=m[i];
        }
    }
    sum=m[0];
    for(i=0;i<n;i++)
    {
        sum+=m[i];
    }
        avg=sum/n;
    printf("%d %d %.2f",s,l,avg);
    return 0;
}
