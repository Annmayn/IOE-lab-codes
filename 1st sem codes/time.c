#include <stdio.h>
#include <conio.h>
#include <time.h>

main(){
	int i;
	double elapsed;
    clock_t start = clock();
	for (i=1;i<10;i++)
	{printf("Hello");}
    sleep(3);
    clock_t stop = clock();
    elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTime elapsed in ms: %f", elapsed);
}
