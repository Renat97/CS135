// Renat Norderhaug
// CS 135
// Project 4
// count_digits part 1 of Project 4


#include "stdio.h"
#define NUMROWS 500

int read_row(int row, int col);
int check_input(int cols);
int compute_row_count(int help);
int print_total_count(int arr[]);

//global variables yessir
int rows = -1;
int cols = -1;
// variables to hold the rows and columns
int storageArray[500] = {0}; // to store any of the input
int intOccurrences[10] = {0}; // to count occurrence of 0 - 9

int main() {
// declare our functions to use later up above
// to keep track of columns and rows

// fill up array with placeholders, to prevent seg fault
for(int j = 0; j < 500; j++) {
  storageArray[j] = 999;
}

printf("The program counts the occurrences of digits 0 through 9 in an NxM array");
printf("\nEnter the size of your array with a space between row and column: ");

while(!(cols >= 0) && !(rows >= 0)) {
  scanf("%d %d", &rows, &cols);

if((rows >= 0) && (cols >= 0)) {
  printf("Making array with %d rows and %d columns\n", rows, cols);
} else {
  printf("Invalid array size!\n");
  printf("Please enter a valid array size : ");
}
}

// declare 2 D array of size row and cols
int twoDArray[rows][cols];
// reading in the rows of the array


// fill the array with placeholders
for(int i = 0; i < rows; i++) {
  for(int j = 0; j < cols; j++) {
   twoDArray[i][j] = 999;
  }
}

// for loop to read in a row
/*
for(int i = 0; i < rows; i++) {
  printf("Enter row %d: ",row)
  scanf("%d",&eachRow[i]);
}
*/
	for (int i = 0; i < (rows); i++) { //Run once for every row
		for (int j = 0; j < (cols); j++) { //Run once for every column in a row
			//Assign the array value to the next read value
			twoDArray[i][j] = read_row(i, j);

			//Pass the value to compute_row_count
			compute_row_count(twoDArray[i][j]);
		}
	}

  printf("\n");

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf(" %d", twoDArray[i][j]);

		}

		printf("\n");
	}
	// printf("\n");

	print_total_count(intOccurrences);

	return 0;

}