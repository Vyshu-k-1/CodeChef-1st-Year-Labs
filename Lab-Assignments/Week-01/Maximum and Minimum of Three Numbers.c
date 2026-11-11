/*
 * Problem Title:   Maximum and Minimum of 3  Numbers
 * CodeChef Code:   1356143821
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW2/problems/MAXMINTHREE?tab=Submissions
 * First Submitted: 11 Sep 2026
 * Status:          Accepted (100 pts)
 * Approach:        Read the three integers (A, B, and C) and use independent
                    if conditions with logical && operators to compare each number against the other two
                    (>= for maximum and <= for minimum) before printing max and min.
 */
#include <stdio.h>

int main() {
int A,B,C,max,min;
 scanf("%d %d %d",&A,&B,&C);
 
 if(A>=B && A>=C)
    max = A;
 if(B>=C && B>=A)
    max = B;
 if(C>=A && C>=B)
     max = C;
 if(A<=B && A<=C)
     min = A;
 if(B<=A && B<=C)
     min = B;
 if(C<=A && C<=B)
     min = C;
 printf("%d %d",max,min);
 return 0;
}

