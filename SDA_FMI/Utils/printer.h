#include <iostream>
#include <vector>


template<typename T>
void printVector(std::vector<T>& vec, char delim='\n') {
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << delim;
	}
}