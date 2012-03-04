#include <stdio.h>

#define LOWER 	0
#define UPPER 	3000
#define STEP 	20

/* print Farenheit-Celcius table */

main()
{
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

