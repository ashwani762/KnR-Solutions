//Again
//Exercise 1.6

//Point 1. Ctrl+D gives EOF to get 0.
//Point 2. Press any other Key and enter to get 1
//Great going
#include <stdio.h>

main ()

{
	int	c;

	c = getchar() != EOF;
	printf("c = getchar() != EOF is %d\n", c);
}
