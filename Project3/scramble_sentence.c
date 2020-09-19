/* Renat Norderhaug
CS 135
Project 3 scramble_sentence
*/

#include <stdio.h>

int main() {

 // scrambles a sentence
 int charsCount = 0, spaceCount = 0, printedSpaceCount = 0;
 // stores the char count number
 int spaceLocation[500] = {2000};
 // to store the sentence we read in
 char sentence[500] = {"\0"};
 // to find the special symbol
 char finalSymbol;

 printf("Enter a sentence that ends in either '.' or '?' or '!' and that is less than 500 chars.");

for(int i = 0; i < 500; i++) {
  sentence[i] = getchar();
  charsCount++;

  if(sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') {
    // add the location to the space location
    spaceLocation[spaceCount] = charsCount;

    spaceCount++;

    finalSymbol = sentence[i];

    break;
  } else if(sentence[i] == ' ') {
    spaceLocation[spaceCount] = charsCount;

    spaceCount++;
  }
  if(i == 499) {
    printf("CAUTION! you are at the last character, which is %c\n", sentence[i]);
  }
}
printf("\nReversed sentence is: ");

// sentence for loops completes when the current word is printed and a space is reached.
// the characters in the for loop and runs until last letter is printed which is 1 - (next space position)

// then it calculates the next space position

 int nextSpacesLocation, lastSpacesLocation, wordsEndLocation, currChar = 0, wordLength;

	//Word for loop, to write words backwards it needs to start at spaceCount and go to zero to print specific word
	for (int i = spaceCount; i >= 0; i--) {
		nextSpacesLocation = spaceLocation[i];

		if (i == 0) {
			lastSpacesLocation = 0; //The first word input has no space before it, so the 0th character acts as its space

			wordLength = nextSpacesLocation;

		} else {
			lastSpacesLocation = spaceLocation[i - 1]; //The word starts at the space before

			wordLength = (nextSpacesLocation - lastSpacesLocation) - 1;

		}

		for (int j = 0; j < wordLength; j++) {
			//currentChar = j + lastSpaceLocation;

			if (j == (wordLength - 2) && i == 0 && wordLength != 1) {
				j += 1;


			}

			if (j < 2 && wordLength != 1) {
				currChar = nextSpacesLocation + (j - 3);
      // to decrement by two spaces,
      // incrementing by two but on a
      // reversed array
			} else if (wordLength != 1) {
				currChar = (j - 2) + lastSpacesLocation;

			} else if (wordLength == 1) {
				currChar = 1 + lastSpacesLocation;

			}

			if (j - 1 == (wordLength - 2) && i == 0 && wordLength != 1) {
				currChar -= 1;


			}
        // if
			if (sentence[currChar] != ' ') {
				putchar(sentence[currChar]);

			} else if (sentence[currChar] == ' ') {
				//do nothing and continue the loop, unsure if a break would stop the loop completely
        continue;
			}

		}

		// handles case if the word length is 1

		if (wordLength == 1) {
			putchar(sentence[currChar - 1]);

		}


		if (i == spaceCount) { //If the last input word is being printed, do not print the exclamation point
			putchar(' ');

		} else if (i == 0) { //else if the first input word is being printed, end it with an exclamation point
			putchar(finalSymbol);

		} else {
			putchar(' ');

		}

	}


