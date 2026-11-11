/*
 * Problem Title:  Simple and Compound Interest 
 * CodeChef Code:  1348737059
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW2/problems/SIMPCOMPINT?tab=Submissions
 * First Submitted: 28 Sep 2026
 * Status:          Accepted (100 pts)
 * Approach:        Read the principal (p), rate (r), and time (t) using appropriate data types (long long int and double to prevent overflow and integer division), 
                    then apply the standard formulas (p * t * r) / 100 for simple interest and p * pow((1 + (r / 100)), t) - p for compound interest
                   before printing both rounded to two decimal places.
 */
#include <stdio.h>
#include<math.h>

int main() {
      int t;
      long long int p;
      double r,si,ci;
      scanf("%lld %lf %d",&p,&r,&t);
      si = (p*t*r/100);
      ci = (p*pow((1+(r/100)),t))-p;
      printf("%.2lf %.2lf",si,ci);
return 0;
}

