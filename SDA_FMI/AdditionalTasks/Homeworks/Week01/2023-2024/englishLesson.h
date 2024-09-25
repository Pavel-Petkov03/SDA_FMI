#include <vector>
#include <iostream>
#include <string>
// easy diff
class Solution {
public:
	void solve() {
		std::string word;
		unsigned number;
		char symbol;
		std::getline(std::cin, word);
		std::cin >> number >> symbol;

		int counter;
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == symbol) {
				counter++;
			}
		}
		counter *= number / word.length();
		for (int i = 0; i < number % word.length(); i++) {
			if (word[i] == symbol) {
				counter++;
			}
		}
		std::cout << counter;
	 }
};