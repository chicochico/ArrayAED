/*
 * main.c
 *
 *  Created on: Mar 10, 2014
 *      Author: Francisco
 */

//change 1
//change 2

#include <stdio.h>

int arrayMax(int *array, int lenght) {
	int maxIndex = 0;
	int i;

	for (i = 1; i < lenght; i++) {
		if (array[maxIndex] < array[i])
			maxIndex = i;
	}

	return maxIndex;
}

int main() {
	int array[] = {4,1,2,3};
	int length = sizeof(array)/sizeof(int);
	printf("%d", arrayMax(array, length));
	return 0;
}
