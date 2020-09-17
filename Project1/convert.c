/*
	Renat Norderhaug
	CS 135 Program 1, speed conversion
*/

#include <stdio.h>

int main (void) {

  // this will be converted into meters per second
	printf("Please enter a speed in miles per hour: ");
	float mphSpeed;

	scanf("%f", &mphSpeed);

	// 1 MPH is .44704 M/S which gets converted here

	printf("%.1f MPH is %.3f m/s\n", mphSpeed, (mphSpeed * 0.44704f));


	return 0;
}
