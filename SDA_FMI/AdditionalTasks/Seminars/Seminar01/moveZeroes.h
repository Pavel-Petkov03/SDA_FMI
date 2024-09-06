#include <iostream>
#include <vector>
#include "../../../Utils/printer.h"
class Solution  {
public:
	void moveZeroes(std::vector<int>& arr) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == 0) {
				for (int j = i; j < arr.size() - 1; j++) {
					arr[j] = arr[j + 1];
				}
				arr[arr.size() - 1] = 0;
			}
		}
		printVector(arr);
	}
};
