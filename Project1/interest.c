/*
	Renat Norderhaug
	CS 135
*/

#include <stdio.h>
#include <math.h>

// interest calculator, uses the math.h
// package
int main (void) {
	float principalAmt, interestAmt, compoundAmt;
	int yearCounter = 1;
	int exactYear = 0;

	printf("Please enter the amount of principal and interest percentage: ");
	scanf("%f %f", &principalAmt, &interestAmt);
   // calculating the interest amount
	 // to multiply by the principalAmt
	interestAmt = interestAmt/100.0;
   // multiples the principalAmt to the power of 0 through 19
	while (yearCounter <= 20) {
		yearCounter++;
		exactYear++;

		compoundAmt = principalAmt * powf((1.0 + (interestAmt / 1)), exactYear);

		printf("%d\t%.2f\n", (yearCounter - 1), compoundAmt);
	}

	return 0;
}
