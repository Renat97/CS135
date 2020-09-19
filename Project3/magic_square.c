// Renat Norderhaug
// CS135
// Magic Square program
// part 2 of Project 3


// sum of rows, columns, and diagnols the same value
// wrote down a example matrix 3 by 3, and then made rules to generate
// the square for that, only works with odd numbers
#include <stdio.h>

int main() {
// the squareSize should be an odd number, use an even number as a test case
int squareSize = 2, nextValue = 0;

while(squareSize % 2 != 1) {
  printf("An odd number is needed to generate the square.\n Please enter an odd number > 0: ");
  scanf("%d", &squareSize);
  if(squareSize % 2 == 0 || squareSize < 1) {
    printf("Please enter a odd number next time!\n");
    squareSize = 2;
  }
}

int squared = squareSize * squareSize;
int magic_square[squareSize][squareSize];
int currCol = (squareSize / 2), currRow = 0, valInterval = 0;

// fill array with placeHolders
for(int i = 0; i < squareSize; i++) {
  for(int j = 0; j < squareSize; j++) {
    magic_square[i][j] = 9999;
    // fire away!
  }
}

for(int i = 0; i < squared; i++) {
// if its at the default value then set value to i + 1
  if(magic_square[currRow][currCol] ==  9999) {
    magic_square[currRow][currCol] = i + 1;

  } else if (magic_square[currRow][currCol] != 9999) {

    // run a loop to keep checked for an value already set
    while(magic_square[currRow][currCol] != 9999) {
      // if the value is already written then we move down a row
      if(currRow != (squareSize - 1 )) {
        currRow +=1;
      // if the current row is out of bounds then we wrap to bottom
      } else if (currRow == (squareSize - 1)) {
        currRow = 0;
      }

    }
    // will update with every update to currRow and currCol
    magic_square[currRow][currCol] = i + 1;

  }
  if(i == 0) {
  // traverse back up a row but first bring currRow to 0
			if (currRow != 0) {
				currRow -= 1;

			} else { //if currRow equals 0, wrap to bottom, so in the first case will go from 1 to 2
				currRow = squareSize - 1;

			}

			//Move to the right one column if current column isnt at the end
      // first case will go from 1 to 2, down two rows and 2 at the end
			if (currCol != (squareSize - 1)) {
				currCol += 1;

			} else { // if its already right
				currCol = 0;

			}
     // otherwise if we arent at 0
		} else if ((i + 1) % squareSize != 0 && i != 0) {
			//Move up one row
			if (currRow != 0) {
				currRow -= 1;

			} else { // if currRow is at 0 go back to the bottom
				currRow = squareSize - 1;

			}

			//Move right one column
			if (currCol != (squareSize - 1)) {
				currCol += 1;

			} else { // case if its already right
				currCol = 0;

			}
		} else if ((i + 1) % squareSize == 0) {
			if (currRow != (squareSize - 1)) {
				currRow += 1;

			} else if (currRow == (squareSize - 1)) { //if curRow is zero wrap to the top again
				currRow = 0;

			}
		}
	}
  // print magic square by 3 tabs as a debug to see result
  // new printf for each row
	for (int s = 0; s < squareSize; s++) {
		for (int k = 0; k < squareSize; k++) {
			printf("\t%3d", (magic_square[s][k]));

		}

		printf("\n");

	}

	printf("\n");

	return 0;

}



