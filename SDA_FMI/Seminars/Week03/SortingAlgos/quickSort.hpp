#include <iostream>


template<typename T>
int partition(T* arr, size_t size) { // returns partition index
	int pivot = arr[size / 2]; // Избираме го примерно в средата(все тая все сме прецакани :( )
	int i = 0;
	int j = size - 1;
	while (true) {

		while (arr[i] < pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (arr[i] == arr[j]) {
			i++; // ако махнем тази проверка забива при равни елементи цялата програма
		}
		if (i < j) {
			std::swap(arr[i], arr[j]);
		}
		else {
			return j;
		}
	}
}

template <typename T>
void quickSort(T* arr, size_t size) {
	if (size <= 1) {
		return; // base case for rec
	}
	int pivotIndex = partition(arr, size);

	quickSort(arr, pivotIndex);
	quickSort(arr + pivotIndex + 1, size - pivotIndex - 1); 
	// skip на pivotIndex всяка итерация защото е in-place
}