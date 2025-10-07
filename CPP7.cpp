#include <iostream>
#include <string>
#include <iomanip>

using std::cin, std::cout;
using std::string;
using std::setprecision, std::fixed;

int main() {
    int x;
    int average[3] = {};
    cin >> x;
    
    for (int i = 0; i < x; ++i) {
        string first, second;
        short x, y, z;
        cin >> first >> second >> x >> y >> z;
        average[0] += x;
        average[1] += y;
        average[2] += z;
    }
    
    for (auto& n : average) {
        cout << fixed << setprecision(1) << float(n) / float(x) << ' ';
    }
}
