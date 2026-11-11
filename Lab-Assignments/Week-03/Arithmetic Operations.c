/*
 * Problem Title:   Arithmetic Operations
 * CodeChef Code:   1356129420
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW4/problems/C1QUEFIVE
 * First Submitted: 11 Sept 2026
 * Status:          Accepted (100 pts)
 * Approach:     Read two integers and an arithmetic operator, 
                 then use a switch statement to perform the corresponding arithmetic operation (+, −, ×, ÷, %) 
                 and display the result.  
 */

#include <stdio.h>

int main() {
	int a,b;
	char op;
	scanf("%d %d %c",&a,&b,&op);

	switch (op)
	{
	  case '+' : printf("%d",a+b);
	            break;
	  case '-' : printf("%d",a-b);
	            break;
	  case '*' : printf("%d",a*b);
	            break;
	  case '/' : printf("%.2f",(float)a/b);
	            break;
	  case '%' : printf("%d",a%b);
	}// your code goes here
return 0;
}
