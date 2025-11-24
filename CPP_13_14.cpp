#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

void commonLeters() {
	string word1, word2;
	set<char> letters1, letters2;

	cin >> word1;
	cin >> word2;

	for (char ch : word1) {
		letters1.insert(ch);
	}

	for (char ch : word2) {
		letters2.insert(ch);
	}

	for (auto ch : "abcdefghijklmnopqrstuvwxy") {
		if (letters1.count(ch) && letters2.count(ch)) cout << ch;
	}

	cout << endl;
}

template <typename T> void Duplicate(std::vector<T> &v) {
	int size = v.size();

	for (size_t i = 0; i < size; ++i) {
		v.push_back(v[i]);
	}
}
