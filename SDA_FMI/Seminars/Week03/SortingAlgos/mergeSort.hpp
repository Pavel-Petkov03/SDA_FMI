


template <typename T>
void merge(T* firstArr, size_t firstSize, T* secondArr, size_t secondSize, T* resultArr) {
	int currentFirstIndex = 0;
	int currentSecondIndex = 0;
	int iterIndex = 0;
	while (currentFirstIndex < firstSize && currentSecondIndex < secondSize) {
		if (firstArr[currentFirstIndex] <= secondArr[currentSecondIndex]) {
			resultArr[iterIndex++] = firstArr[currentFirstIndex++];
		}
		else {
			resultArr[iterIndex++] = secondArr[currentSecondIndex++];
		}
	}

	while (currentFirstIndex < firstSize) {
		resultArr[iterIndex++] = firstArr[currentFirstIndex++];
	}
	while (currentSecondIndex < secondSize) {
		resultArr[iterIndex++] = secondArr[currentSecondIndex++];
	}

}

template < typename T>
void mergeSortWrapper(T* currentArr, size_t size, T* buffer) {
	if (size <= 1) {
		return;
	}
	size_t middle = size / 2;
	mergeSortWrapper(currentArr, middle, buffer);
	mergeSortWrapper(currentArr + middle, size - middle, buffer + middle);
	// в момента двете половинки на масива са сортирани
	merge(currentArr, middle, currentArr + middle, size - middle, buffer);

	for (int i = 0; i < size; i++) {
		currentArr[i] = buffer[i]; // flats the diamond
	}
}




template<typename T>
void mergeSort(T* arr, size_t size) {

	if (!arr || size == 0) {
		return;
	}
	T* buffer = new T[size];
	mergeSortWrapper(arr, size, buffer);
	delete[] buffer;
}