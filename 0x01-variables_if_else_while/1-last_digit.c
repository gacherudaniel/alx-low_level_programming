#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Main function
 */
int main(void){
	int n;

	srand(time(0));
	n = rand();

	printf("Last digit of %d is ", n);
	
	// Get the last digit of n
	 int last_digit = n % 10;

	if (last_digit >5){
		printf("and is greater than 5\n");
	} else if (last_digit == 0) {
		printf("and is 0\n");
	} else {
		printf("and is less than 6 and not 0\n");
	}
	return 0;
}
