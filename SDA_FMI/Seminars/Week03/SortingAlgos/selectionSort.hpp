#include <iostream>


template <typename T>
void selectionSort(T* arr, size_t size) {
	for (int i = 0; i < size; i++) {
		int currentMinIndex = i;
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[currentMinIndex]) {
				currentMinIndex = j;
			}
		}
		if (currentMinIndex == i) {
			return // sorted
		}
		std::swap(arr[i], arr[currentMinIndex]);
	}
}
