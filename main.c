/*
 * main.c
 *
 *  Created on: Mar 10, 2014
 *      Author: Francisco
 */

#include <stdio.h>


int arrayMax(int *array, int length)
{
	int maxIndex = 0;
	int i;

	for (i = 1; i < length; i++) {
		if (array[maxIndex] < array[i])
			maxIndex = i;
	}

	return maxIndex;
}


int arrayMin(int *array, int length)
{
	int minIndex = 0;
		int i;

		for (i = 1; i < length; i++) {
			if (array[minIndex] > array[i])
				minIndex = i;
		}

		return minIndex;

}


int arrayMult(int *array, int length)
{
	int mult = 1;
	int i;

	for (i = 0; i < length; i++) {
		mult *= array[i];
	}

	return mult;
}



void bubbleSort(int *array, int length)
{
	int foo, i, j;
	for (i = 0; i < length-1; i++) {
		for (j = 0; j < length-i-1; j++) {
			if (array[j+1] < array[j]) {
				foo = array[j+1];
				array[j+1] = array[j];
				array[j] = foo;
			}
		}

	}
}


int binarySearch(int *array, int left, int right, int n)
{
	if (left == right && array[left] != n) return -1;

	int middle = (left + right)/2;
	if (array[middle] == n)
		return middle;
	else if(array[middle] > n)
		return binarySearch(array, middle+1, right, n);
	else
		return binarySearch(array, left, middle-1, n);
}


int main() {
	int array[] = {4,1,2,3,-12};
	int length = sizeof(array)/sizeof(int);
	bubbleSort(array, length);
	printf("%d\n", binarySearch(array, 0, length, 3));
	return 0;
}
