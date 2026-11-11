/*
 * Problem Title:   Multiplication Table
 * CodeChef Code:   1356133301
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW3/problems/MULTTABL?tab=Submissions
 * First Submitted: 11 Sept 2026
 * Status:          Accepted (100 pts)
 * Approach:    Read the number and number of rows, then use a while loop
                to multiply the given number by each integer from 1 to the specified number of rows
                and print the multiplication table.   
 */

#include <stdio.h>

int main() {
	int number,rows,i=1;
	scanf("%d %d",&number,&rows);
	 
	 while(i<=rows)
	 {
	     printf("%d x %d = %d\n",number,i,number*i);
	     i++;
	 }// your code goes here
return 0;
}

