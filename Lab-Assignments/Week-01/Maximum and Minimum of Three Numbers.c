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

