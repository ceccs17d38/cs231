	//Name        : Nirmal K George Mathew
	//Roll no.    : 38
	//Program no. : 3
	//program name: Insertion sort

	#include <stdio.h>

	int insertionSort(int array[], int size) {
		int i, j, temp;
		for (i=1; i<size; i++) {
			temp = array[i];
			for (j=i-1; j>=0 && array[j] > temp; j--) {
					array[j+1] = array[j];
			}
			array[j+1] = temp;
		}
	}
	void main() {
		int array[100], i, j, size;

		printf("Enter size of the array : ");
		scanf("%d", &size);

		printf("Enter array\n");
		for (i=0; i<size; i++) {
			scanf("%d", &array[i]);
		}

		insertionSort(array, size);

		printf("Sorted array\n");
		for (i=0; i<size; i++) {
			printf("%d\n", array[i]);
		}
	}


	OUTPUT:

		Enter size of the array : 4
		Enter array
		5
		7
		2
		6
		Sorted array
		2
		5
		6
		7
