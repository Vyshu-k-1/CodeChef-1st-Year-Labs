/*
 * Problem Title:   Prime Check
 * CodeChef Code:   1359045737
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW4/problems/CASS34
 * First Submitted: 18 Sept 2026
 * Status:          Accepted (100 pts)
 * Approach:  Read an integer and check whether it is less than 2 or divisible by any number from 2 to n−1 using a while loop;
               if divisible, print "NO", otherwise print "YES" to indicate whether the number is prime.     
 */

#include <stdio.h>

int main() {
    int n,i,flag=0;
 
    scanf("%d", &n);
    if (n==0 || n==1) 
        flag = 1;
        i=2;
     while (i<n) {
         
         if (n % i ==0) {
             flag = 1;
             break ;
         }
         i++;
     }  
     if (flag == 1)
     printf("NO\n");
     else 
     printf("YES\n");
    return 0;
}
