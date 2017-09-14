s#include <stdio.h>
#include <conio.h>
#include <math.h>
  int a=1,b=1,c;
 
int main(void)
{
	c=++a + a++ + ++a + a++ + ++a;
	printf("%d,%d",c,a);
	
	/*Notice that it gives 18...it is because the '++' operator has associativity from right to left.
	SO,during the operation,the 1st term from right becomes 2,
	then the 2nd term (FROM RIGHT) remains 2 and becomes 3 as the associativity is passed on
	i.e., when the computer moves on to the next operation.
	With similar process the sum becomes,from left to right:
	6+4+4+2+2	*/
	return 0;
}