#include <iostream>
#include <vector>

class Solution {
public:
	void addTwo(std::vector<int>& vec, int target) {
		for (int i = 0; i < vec.size(); i++) {
			for (int j = i + 1; j < vec.size(); j++) {
				if (vec[i] + vec[j] == target) {
					std::cout << "[ " << i << ", " << j << " ]";
					return;
				}
			}
		}
	}
};