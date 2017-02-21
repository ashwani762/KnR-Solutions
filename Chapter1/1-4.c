//Chapter 1 - Learning Introduction of alphabet
//Why am I am writing void?
//Exercise 1.4

#include <stdio.h>

main ()

{
	int	celcius, fahr;
	int	lower, upper, step;

	lower = -20;
	upper = 100;
	step = 10;	

	celcius = lower;
	while (celcius <= upper) {

		fahr = 9 * celcius / 5 + 32;
		printf("%3d %3d\n", celcius, fahr);
		celcius = celcius + step;

	}
}