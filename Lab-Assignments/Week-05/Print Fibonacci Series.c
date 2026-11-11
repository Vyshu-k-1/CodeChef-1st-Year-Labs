/*
 * Problem Title:   Print Fibonacci Series
 * CodeChef Code:   1384140207 
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW6/problems/JSQ1
 * First Submitted: 30 Oct 2026
 * Status:          Accepted (100 pts)
 * Approach:      Read the number of terms, initialize the first two Fibonacci numbers as 0 and 1,
                  then use a for loop to calculate each subsequent term by adding the previous two terms 
                  and update the values until n terms are printed.
 */

#include <stdio.h>

int main() {
	int n,i,f0,f1,fn;
	f0=0;
	f1=1;
	scanf("%d",&n);
	printf("%d %d ",f0,f1);
	for(i=2;i<n;i++)
	{
	    fn=f0+f1;
	    printf("%d ",fn);
	    f0=f1;
	    f1=fn;
	    
	}// your code goes here
return 0;
}

