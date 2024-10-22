#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fromCharToIndex(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    else if (ch >= 'A' && ch <= 'Z') {
        return 10 + (ch - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {
        return 36 + (ch - 'a');
    }
    return 0;
}

void countOnlyOne() {
    string s;
    std::cin >> s;
    std::pair<int, int> countArr[26 + 26 + 10];
    for (int i = 0; i < 62; i++) {
        countArr[i] = { 0, 0 };
    }
    for (int i = 0; i < s.size(); i++) {
        int currentIndex = fromCharToIndex(s[i]);
        countArr[currentIndex].second = i;
        countArr[currentIndex].first++;
    }
    for (int i = 0; i < s.size(); i++) {
        int currentIndex = fromCharToIndex(s[i]);
        if (countArr[currentIndex].first == 1) {
            std::cout << countArr[currentIndex].second;
            if (i != s.size() - 1) {
                std::cout << " ";
            }
        }
    }
}