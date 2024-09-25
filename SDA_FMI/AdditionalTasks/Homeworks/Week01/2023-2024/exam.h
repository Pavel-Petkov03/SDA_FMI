#include <iostream>
#include <vector>
#include <string>
class Solution {
public:
    void solve() {
        int t;
        std::cin >> t;
        for (int i = 0; i < t; i++) {
            int n;
            int k;
            std::string str;
            std::cin >> n >> k >> str;
            int arr[26]{0};
            for (int j = 0; j < n; j++) {
                if (str[j] >= 'A' && str[j] <= 'Z') {
                    int index = str[j] - 'A';
                    arr[index]++;
                }
            }
            for (int j = 0; j < 26; j++) {
                if (arr[j] >= k) {
                    char s = j + 'A';
                    std::cout << s;
                }
            }
            std::cout << std::endl;
        }
    }
};