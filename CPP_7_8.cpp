#include <iostream>
#include <string>
#include <iomanip>

using std::cin, std::cout, std::endl;
using std::string;
using std::setprecision, std::fixed;

void cpp_7_1() {
    int repeat;
    cin >> repeat;
    
    struct Score {
        int x = 0;
        int y = 0;
        int z = 0;
    };
    
    Score score {};
    
    for (int i = 0; i < repeat; ++i) {
        string first, second;
        int x, y, z;
        cin >> first >> second >> x >> y >> z;
        score.x += x;
        score.y += y;
        score.z += z;
    }
    
    cout << fixed << setprecision(1);
    cout << float(score.x) / float(repeat) << ' ';
    cout << float(score.y) / float(repeat) << ' ';
    cout << float(score.z) / float(repeat) << endl;
}

void cpp_8_1() {}

void cpp_8_2() {}

int main() {
    // cpp_7_1();
    
}

