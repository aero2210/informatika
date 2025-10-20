#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::endl;
using std::string;
using std::vector;
using std::swap;

void cpp_9_1(vector<int> &array) {
    for (size_t i = 0; i < array.size(); ++i) {
        size_t j = i + 1;
        while (j < array.size() && array[i] == array[j]) {
            while (j + 1 < array.size()) {
                swap(array[j], array[j + 1]);
                ++j;
            }
            j += 1;
            array.pop_back();
        }
    }
    
    for (int num : array) cout << num << " ";
    cout << endl;
}

bool cpp_9_2(string str1, string str2) { return true; }

int cpp_9_3(int num, int power) {
    return power == 1 ? num : num * cpp_9_3(num, power - 1);
}

int cpp_9_4(string str) {
    return str.size();
}

void cpp_9_5(int num) {
    int array[num] {};

    for (int i = 1; i < num; ++i) {
        for (int j = i; 2 * i * j + i + j < (num - 1) / 2; ++j) {
            array[2 * i * j + i + j] = -1;
        }
    };

    for (int i = 1; i < (num - 1) / 2; ++i) {
        if (array[i] == -1) continue;
        cout << 2 * i + 1 << endl;
    }
}

template <typename T>
void cpp_10_1(T &var1, T &var2) {
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

template <typename T>
T cpp_10_2(T var1, T var2) {
    return var1 < var2 ? var1 : var2;
}

template <typename T>
T cpp_10_3(T array[], int length) {
    T result {};

    for (size_t i = 0; i < length; ++i) {
        result += array[i];
    }

    return result;
}

template <typename T>
bool cpp_10_4(T array[], int length, T to_find) {
    for (size_t i = 0; i < length; ++i) {
        if (array[i] == to_find) return true;
    }
    return false;
}

int main() {
    /* check excercise solutions */
}

