// CS 135 project 4 by Renat Norderhaug
// array formatting


// prints out an NxM dimensional array of integers formatted according to user specs.
#include <stdio.h>

// function declarations
int read_row(int row, int col);
int checkInput(int a);
int format_row(int linesCount, int charCount, char rightSpot, char inBetween, int alignment, int theRow[alignment]);
int format_array(int numOfNewLine, int element, char justify, char inBetween, int colAmt, int rowAmt, int arr[rowAmt][colAmt]);
void print_array(int arr[]);
int check_Format(int Size);

// global variables
int storageArr[500] = {0};
int rows = -1, cols = -1;

int main() {

// fill the storageArr with placeHolders

for(int i = 0; i < 500; i++) {
  storageArr[i] = 9999;
}
printf("Enter the size of your array: ");

// wait to find the right values that fit the conditions
	while(!(rows >= 0) && !(cols >= 0)) {
    scanf("%d %d", &rows, &cols);
    if((rows >= 0) && (cols >= 0)) {
      printf("an array of size %d %d was made.\n", rows, cols);
    }
    else {
      printf("Invalid input please input it again.\n");
    }

  }

// declare the 2d Matrix
int twoDArray[rows][cols];

// read in the 2d Matrix rows one by one but first fill in with placeholders
for(int i = 0; i < rows; i++) {
  for(int j = 0; j < cols; j++) {
  twoDArray[i][j] = 9999;
  }
}

for (int i = 0; i < (rows); i++) { //Run once for every row
		for (int j = 0; j < (cols); j++) { //Run once for every column in a row
			//Assign the array value to the next read value
		twoDArray[i][j] = read_row(i, j);

		}
	}

// here is the array, what you are taking in and print out the number of lines
for(int j = 0; j < rows; j++) {
  for(int k = 0; k < cols; k++) {
    printf("\t%d ", twoDArray[j][k]);
  }
  printf("\n");
}

// prompt to enter the number of new lines between rows, then span of elements
	int theNewLines, elementsSpan;
  char justify = 'r', betweenChars;

	printf("Enter the number of new lines between rows: ");
	scanf("%d", &theNewLines);

  // boolean value to check if the array's element can fit the span
	int isItBigEnough = 0;

	while (!isItBigEnough) {
		printf("Enter the span of each array element: ");
		scanf("%d", &elementsSpan);

		isItBigEnough = check_format(elementsSpan);

	}

	//allignChar = getchar();
  	printf("Enter the type of justification (l for left, r for right): ");
	scanf(" %c", &justify);

	printf("Enter the character to be placed between elements: ");
	scanf(" %c", &betweenChars);

	//format_row(newLineAmount, elementSpan, allignChar, betweenChar);

	format_array(theNewLines, elementsSpan, justify, betweenChars, cols, rows, twoDArray);

	return 0;


}

int read_row(int row, int col) {
 int value = 9999;
 int isValid = 0;

 if(col == 0) {
   printf(" Enter row values for row %d: ", row);

   while(!isValid) {
     for(int j = 0; j < (cols); j++) {
       int inputCache = 9999;

       scanf("%d", &inputCache);
       // if it passes
       if(checkInput(inputCache)) {
         storageArr[j] = inputCache;
        // we have reached the end of the row
       if(j == cols- 1) {
         isValid = 1;
       }

       } else {
         printf("%d is not an integer between 0 and 9.\n Enter the row's %d values.): ", inputCache, row);

         isValid = 0;

         // the rest are scanned in
          int remainingValues = 0;

          for (int jj = 0; jj < (col - j - 1); jj++) {
						scanf("%d", &remainingValues);

					}

          break; // exit the for loop if there is an invalid number
       }
     }
   }
 }
 return storageArr[col];
}