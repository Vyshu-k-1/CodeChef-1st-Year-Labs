/*
 * Problem Title:   Decimal to Binary
 * CodeChef Code:   1365181410
 * Problem Link:    https://www.codechef.com/learn/course/gnara-s1-pps-c-2026-lab-probs/NRYW3/problems/BITMEDU6
 * First Submitted: 29 Sep 2026
 * Status:          Accepted (100 pts)
 * Approach:     Read a decimal number and repeatedly divide it by 2,
                 store each remainder in reverse order using place values, 
                 and continue until the number becomes 0 to obtain its binary equivalent.   
 */

#include <stdio.h>

int main() {
	int n,remainder1,binary=0,i=1;
	scanf("%d",&n);
	while(n!=0) {
	    remainder1=n%2;
	    binary=binary+(remainder1*i);
	    n=n/2;
	    i=i*10;
	}
printf("%d",binary);
return 0;

}

