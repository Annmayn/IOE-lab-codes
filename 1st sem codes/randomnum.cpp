#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	long xdist;
	do
	{
		xdist=rand()%500+100;
	}
	while(xdist>100 && xdist<600);
	
	printf("%d",xdist);
	return 0;
}
