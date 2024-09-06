#include <iostream>
#include <vector>


template<typename T>
void printVector(std::vector<T>& vec, char delim='\n') {
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << delim;
	}
}


template <typename T>
void printVectorMatrix(std::vector<std::vector<T>>& vec ) {
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec.size(); j++) {
			std::cout << vec[i][j] << " ";
		}
		std::cout << '\n';
	}
}