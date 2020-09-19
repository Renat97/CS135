// Renat Norderhaug
// CS135
// Magic Square program
// part 2 of Project 3


// sum of rows, columns, and diagnols the same
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
    magic[i][j] = 9999;
    // fire away!
  }
}

for(int i = 0; i < squared; i++) {

  if(magic_square[currRow][currCol] = 9999) {
    magic_square[currRow][currCol] = i + 1;

  } else if (magic_square[currRow][currCol] != 9999) {

    // run a loop to keep checked for an open value
    while(magic_square[currRow][currCol] != 9999) {
      // if the value is already written then we move down a row
      if(currRow != (squareSize - 1 )) {
        currRow +=1;
      }



    }



  }



}



}