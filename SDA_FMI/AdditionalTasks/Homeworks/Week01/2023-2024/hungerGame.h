#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
class Solution {
public:
	void solve() {
		unsigned n;
		unsigned k;
		std::cin >> n >> k;
		std::vector<int> vec;
		readVector(vec, n);
		calculateMinDiff(vec, k);
	}
private:

	void readVector(std::vector<int>& vec, int n) {
		for (int i = 0; i < n; i++) {
			int f;
			std::cin >> f;
			vec.push_back(f);
		}
	}

	void calculateMinDiff(const std::vector<int>& vec, int k) {
		int globalCounter = INT_MAX;
		int subsetsCount = 1 << vec.size();
		for (int i = 0; i < subsetsCount; i++) {
			std::vector<int> current;
			populateCurrentVector(current, vec, k, i);
			if (current.size() != k) {
				continue;
			}
			int max = *std::max_element(std::begin(current), std::end(current));
			int min = *std::min_element(std::begin(current), std::end(current));
			int diff = max - min;
			if (diff < globalCounter) {
				globalCounter = diff;
			}
		}
		std::cout << globalCounter;
	}

	void populateCurrentVector(std::vector<int>& current, const std::vector<int>& src, int k, int i) {
		for (int j = 0; j < src.size(); j++) {
			if (i & (1 << j)) {
				current.push_back(src[j]);
			}
			if (k == current.size()) {
				break;
			}
		}
	}
};