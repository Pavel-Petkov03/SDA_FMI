#include <iostream>

void countingSort(int* arr, size_t size) {
	if (!arr || size <= 1) {
		return;
	}
	int arrCopy[100000];
	int currentMaxElement = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > currentMaxElement) {
			currentMaxElement = arr[i];
		}
		arrCopy[i] = arr[i];
	}
	int countArr[100000];
	for (int i = 0; i <= currentMaxElement; i++) {
		countArr[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		countArr[arrCopy[i]]++;
	}

	for (int i = 1; i <= currentMaxElement; i++) {
		countArr[i] += countArr[i - 1]; // accumulator
	}

	for (int i = size - 1; i >= 0; i--) {
		arr[countArr[arrCopy[i]] - 1] = arrCopy[i];
		countArr[arrCopy[i]]--;
	}
	
}