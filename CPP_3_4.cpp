#include <iostream>

using std::cin, std::cout, std::endl;
    
void cpp_3_1() {
    float x, y;
    cout << "Enter X:" << endl;
    cin >> x;
    cout << "Enter Y:" << endl;
    cin >> y;
    int day = {};
    
    while (x < y) {
        x *= 1.1;
        ++day;
    }

    cout << day << endl;
}

void cpp_4_1() {
    int a, b;
    char op;
    
    cout << "Enter expression: <A> <operation(+, -, *, /)> <B>" << endl;
    cin >> a >> op >> b;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') cout << a / b;
    else cout << "Undefined";
}

void cpp_4_2() {
    int a, b;
    cout << "!!! A > B" << endl;
    cout << "Enter A:" << endl;
    cin >> a;
    cout << "Enter B:" << endl;
    cin >> b;

    while (a > b) {
        if (a / 2 > b && a % 2 == 0) {
            cout << ":2" << endl;
            a /= 2;
        }
        else {
            cout << "-1" << endl;
            a -= 1;
        }
    }
}
    
int main() {
    // cpp_3_1();
    // cpp_4_1();
    // cpp_4_2();
}
