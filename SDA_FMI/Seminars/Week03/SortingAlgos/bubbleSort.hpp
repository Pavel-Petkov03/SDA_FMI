#include <iostream>


template<class T>
void bubbleSort(T* arr, size_t len) {
	int end = len - 1;
	for (int i = 0; i < len; i++) {
		unsigned lastSwappedIndex = 0;
		for (int j = 0; j < end; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				lastSwappedIndex = j;
			}
		}
		if (lastSwappedIndex == 0) {
			return;
		}
		end = lastSwappedIndex;
	}
}