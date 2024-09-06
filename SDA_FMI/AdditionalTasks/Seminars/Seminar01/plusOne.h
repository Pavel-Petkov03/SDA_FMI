#include <iostream>
#include <vector>

class Solution {
public:
	void plusOne(std::vector<int>& v) {
		std::vector<int> result = this->plusOne__rec(v, v.size() - 1);
		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i] << " ";
		}
	}
private:
	std::vector<int> plusOne__rec(std::vector<int>& v, int currentIndex) {
		if (currentIndex == -1) {
			std::vector<int> result;
			result.push_back(1);
			for (int i = 0; i < v.size(); i++) {
				result.push_back(0);
			}
			return result;
		}
		if (v[currentIndex] == 9) {
			v[currentIndex] = 0;
			return plusOne__rec(v, currentIndex - 1);
		}
		v[currentIndex]++;
		return v;
	}
};