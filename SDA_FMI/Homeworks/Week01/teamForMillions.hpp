#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int encode(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';  // '0' -> 0, '9' -> 9
    }
    else if (c >= 'a' && c <= 'z') {
        return c - 'a' + 10;  // 'a' -> 10, 'z' -> 35
    }
    else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 36;  // 'A' -> 36, 'Z' -> 61
    }

    return -1;  // Return -1 for invalid input
}

char decode(int n) {
    if (n >= 0 && n <= 9) {
        return n + '0';  // 0 -> '0', 9 -> '9'
    }
    else if (n >= 10 && n <= 35) {
        return n - 10 + 'a';  // 10 -> 'a', 35 -> 'z'
    }
    else if (n >= 36 && n <= 61) {
        return n - 36 + 'A';  // 36 -> 'A', 61 -> 'Z'
    }

    return -1;  // Return -1 for invalid input
}

class Solution {
public:
    int main() {
        int count[62];
        for (int i = 0; i < 62; i++) {
            count[i] = 0;
        }
        string word;
        int n;
        std::cin >> n;
        std::cin >> word;
        for (int i = 0; i < word.size(); i++) {
            int index = encode(word[i]);
            count[index]++;
        }
        for (int i = 0; i < 62; i++) {
            if (count[i]) {
                char c = decode(i);
                for (int j = 0; j < count[i]; j++) {
                    std::cout << c;
                }
            }
        }
    }
};