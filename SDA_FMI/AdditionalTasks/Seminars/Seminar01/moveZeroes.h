#include <iostream>
#include <vector>
class Solution {
public:
    void moveZeroes(std::vector<int>& arr) {
        int countZero = 0;
        std::vector<int> result;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                count++;
            }
            else {
                result.push_back(arr[i]);
            }
        }
        for (int i = 0; i < count; i++) {
            result.push_back(0);
        }

        for (int i = 0; i < arr.size(); i++) {
         
            std::cout << arr[i];
            if (i != arr.size() - 1) {
                std::cout << " ";
            }
        }
    }
};
