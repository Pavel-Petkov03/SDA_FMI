#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int score;

    bool operator<(const Student& other) {
        if (score == other.score) {
            return name >= other.name;
        }
        return score < other.score;
    }
};


class Solver {
public:
    int main() {
        int n;
        std::cin >> n;
        std::vector<Student> v(n);
        for (int i = 0; i < n; i++) {
            std::cin >> v[i].name;
        }
        for (int i = 0; i < n; i++) {
            std::cin >> v[i].score;
        }

        std::sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++) {
            std::cout << v[i].name << " " << v[i].score << std::endl;
        }
        return 0;
    }
};