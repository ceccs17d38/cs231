	//Name        : Nirmal K George Mathew
	//Roll no.    : 38
	//Program no. : 1
	//program name: Sequential search


	#include <stdio.h>

	int sequentialSearch(int array[], int size, int element) {
		int i;

		for (i=0; i<size; i++) {
			if (array[i] == element) {
				return (i+1);
			}
		}
		return (0);
	}
	int main() {
		int i=0, found=0, array[100], size, element;

		printf("Enter number of elements : ");
		scanf("%d", &size);

		printf("Enter elements\n");
		for (i=0; i<size; i++) {
			scanf("%d", &array[i]);
		}

		printf("Enter element to search : ");
		scanf("%d", &element);

		found = sequentialSearch(array, size, element);

		if (found) {
			printf("Element found at position %d\n", found);
		} else {
			printf("Element not found\n");
		}
	}


	OUTPUT:

		Enter number of elements : 4
		Enter elements
		3
		5
		1
		6
		Enter element to search : 5
		Element found at position 2
