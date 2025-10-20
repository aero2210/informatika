#include <iostream>
#include <cmath>
#include <pair>

using std::cout, std::cin, std::endl;
using std::vector;
using std::pair;

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

void cpp_6_1() {
    int amount = 0;
    int count = 0;
    vector<int> wishes;
    cin >> amount;

    for (int i = 0; i < amount; ++i) {
        int para;
        cin >> para;
        if (wishes.size() > 0 && wishes.back() == para) {
            wishes.pop_back();
            count += 2;
        }
        else {
            wishes.push_back(para);
        }
    }

    cout << count;
}

void cpp_6_2() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j == n - 1) cout << "1 ";
            else if (i + j < n) cout << "0 ";
            else cout << "2 ";
        }
        cout << endl;
    }
}

void cpp_6_3() {
    int m, n, inputs;
    vector<pair<int, int>> directs = {
        {1, 0}, {1, 1}, {0, 1}, {-1, 1},
        {-1, 0}, {-1, -1}, {0, -1}, {1, -1}
    };

    cin >> m >> n;
    cin >> inputs;
    int grid[m][n] {};

    for (int i = 0; i < inputs; ++i) {
        size_t x, y;
        cin >> y >> x;
        grid[y - 1][x - 1] = -1;
    }

    cout << endl;

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) { 
            int mine = grid[i][j];
            if (mine == -1) {
                cout << "\033[31m*\033[0m";
                continue;
            }
            for (auto p : directs) {
                int dy = i + p.first;
                int dx = j + p.second;
                if (0 <= dy && dy < m && 0 <= dx && dx < n) {
                    // cout << dy << ' ' << dx << endl;
                    grid[i][j] += (grid[dy][dx] == -1);
                }
            }
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    // cpp_5_1();
    // cpp_5_2();
    // cpp_5_3();
    // cpp_5_4();
    // cpp_5_5();
    // cpp_5_6();
    // cpp_6_1();
    // cpp_6_2();
    // cpp_6_3();
}
