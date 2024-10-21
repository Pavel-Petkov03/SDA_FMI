template<typename T>
void insertionSort(T* arr, size_t size) {
	for (int i = 1; i < size; i++) {
		T element = arr[i];
		int index = i - 1;
		while (index >= 0 && element < arr[index]) {
			arr[index + 1] = arr[index];
			index--;
		}
		arr[index + 1] = element;
	}
}