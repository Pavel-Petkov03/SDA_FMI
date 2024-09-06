#include <iostream>
#include <vector>
#include "../../../Utils/printer.h"
class Solution {
private:
	std::vector<std::vector<int>> __rotate(std::vector<std::vector<int>>& vec) {
		std::vector<std::vector<int>> result;
		for (int col = 0; col < vec.size(); col++) {
			std::vector<int> cur;
			for (int row = vec[0].size() - 1; row >= 0; row--) {
				cur.push_back(vec[row][col]);
			}
			result.push_back(cur);
		}
		return result;
	}
public:
	void rotate(std::vector<std::vector<int>>& vec) {
		std::vector<std::vector<int>> result = this->__rotate(vec);
		printVectorMatrix(result);
	}
};