#include <iostream>
#include <cmath>

using std::cout, std::cin, std::endl;

void cpp_5_1() {
    int length;
    int summa = 0;

    cout << "Enter array size: " << endl;
    cin >> length;
    cout >> "Array length = " << length << endl;

    int array[length] {};

    for (int &num : array) {
        int x = rand();
        cout << x << ' ';
        num = x;
        summa += x;
    }

    cout << "Averega value = " << summa / length << endl;
}

void cpp_5_2() {
    int length;
    int odd = 0;

    cout << "Enter array size: " << endl;
    cin >> length;

    int array[length];

    for (int &num : array) {
        int x = rand();
        num = rand;
        odd += (x % 2);
    }

    cout << "Array contains " << odd << " odd integers" << endl;
    cout << "Array contains " << length - odd << " even integers" << endl;
}

void cpp_5_3() {
    int length;
    int low = 2'000'000'000;
    int high = -2'000'000'000;
    
    cout << "Enter array size: " << endl;
    cin >> length;

    int array[length];

    for (int &num : array) {
        int x = rand();
        num = x;
        if (x < low) low = x;
        if (x > high) high = x
    }

    cout << "Maximum in array = " << high << endl;
    cout << "Minimum in array = " << low << endl;
}

void cpp_5_4() {
    int length;
    int depth;

    cout << "Enter array rows amount: " << endl;
    cin >> length;
    cout << "Enter array colums amount: " << endl;
    cin >> depth;

    int array[length][depth];

    for (size_t i = 0; i < length; ++i) {
        for (size_t j = 0; j < depth; ++j) {
            x = rand();
            array[i][j] = x;
            cout << x << ' ';
        }
        cout << endl;
    }
}

void cpp_5_5() {
    int length;
    int depth;
    int summa = 0;

    cout << "Enter array rows amount: " << endl;
    cin >> length;
    cout << "Enter array colums amount: " << endl;
    cin >> depth;

    int array[length][depth];

    for (size_t i = 0; i < length; ++i) {
        for (size_t j = 0; j < depth; ++j) {
            x = rand();
            array[i][j] = x;
            summa += x;
        }
    }

    cout << "Summa integers in array = " << summa << endl;
}

void cpp_5_6() {
    int length;
    int depth;
    int summa = 0;

    cout << "Enter array rows amount: " << endl;
    cin >> length;
    cout << "Enter array colums amount: " << endl;
    cin >> depth;

    int array[length][depth];

    for (size_t i = 0; i < length; ++i) {
        for (size_t j = 0; j < depth; ++j) {
            x = rand();
            array[i][j] = x;
            if (i == j) summa += x;    
        }    
    }
    
    cout << "The sum of the integers in array = " << summa << endl;
}

int main() {
    // cpp_5_1();
    // cpp_5_2();
    // cpp_5_3();
    // cpp_5_4();
    // cpp_5_5();
    // cpp_5_6();
}
