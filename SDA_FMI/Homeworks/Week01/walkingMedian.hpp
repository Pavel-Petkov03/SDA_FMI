#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void insertIn(std::vector<int>& ref, int element) {
    int index = ref.size() - 1;
    while (index > 0 && ref[index - 1] > element) {
        ref[index] = ref[index - 1];
        index--;
    }
    ref[index] = element;
}

class Solution {
public:
    void insertIn(std::vector<int>& ref, int element) {
        int index = ref.size() - 1;
        while (index > 0 && ref[index - 1] > element) {
            ref[index] = ref[index - 1];
            index--;
        }
        ref[index] = element;
    }

    int main() {
        int n;
        std::cin >> n;
        std::vector<int> v;
        for (int i = 0; i < n; i++) {
            int k;
            std::cin >> k;
            v.push_back(k);
            insertIn(v, k);
            double res;
            if ((i + 1) % 2 == 0) {
                res = (v[(i + 1) / 2] + v[(i + 1) / 2 - 1]) / 2.0;
            }
            else {
                res = v[(i + 1) / 2];
            }
            std::cout << res << std::endl;
        }
    }
};