// Renat Norderhaug
// reversing an array

#include <stdio.h>

void returnArrayInput (int size, int arr[size]);
void reverseTheArray (int size, int arr[size]);

int main (void) {
	int arraySize;

	printf("Enter the size of the array: ");
	scanf("%d", &arraySize);

	int intArray[arraySize];

	returnArrayInput(arraySize, intArray);

	printf("Current array is:\n");

	for (int i = 0; i < arraySize; i++) {
		printf("%d", intArray[i]);

	}

	printf("\n");

	reverseTheArray(arraySize, intArray);

	printf("Reversed array is:\n");

	for (int i = 0; i < arraySize; i++) {
		printf("%d", intArray[i]);

	}

	printf("\n");

	return 0;

}

void returnArrayInput (int size, int arr[size]) {
	printf("Enter %d numbers, separated by spaces: ", size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);

	}

	return;

}

void reverseTheArray (int size, int arr[size]) {
	int tempArray[size];

	for (int i = 0; i < size; i++) {
		tempArray[i] = arr[size - (i+1)];

	}

	for (int i = 0; i < size; i++) {
		arr[i] = tempArray[i];

	}

	return;

}
