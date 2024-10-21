// the solutions of all exercises will be in h files for easier testing(not conventional)
#include "Seminars/Week03/SortingAlgos/quickSort.hpp"
#include "Utils/printer.h"
#include <iostream>
#include <vector>


int main() {
	int arr[14] = { 2,4,3,13,145,2,1,1,0,-5,66,16 , 3, 333};
	quickSort<int>(arr, 14);
	for (int i = 0; i < 14; i++) {
		std::cout << arr[i] << " ";
	}
}