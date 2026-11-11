/*
 * Problem Title:   Sum of Digit
 * CodeChef Code:   1359075371
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW4/problems/CASS06
 * First Submitted: 18 Sept 2026
 * Status:          Accepted (100 pts)
 * Approach:    Read an integer and use a do-while loop to extract each digit using the modulus operator (%), 
                 add the digits to a sum, and repeat until the number becomes 0, then print the sum of its digits.
 */

#include <stdio.h>

int main() {
    int n,num,d,res=0;
    scanf("%d",&num);
    n=num;
    do
    {
       d=n%10;
       res+=d;
       n/=10;
       }
       while(n!=0);
       printf("%d",res);
     return 0; 
}
