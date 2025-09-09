#include <iostream>
#include <string>
#include <cmath>


int get_integer()
{
  int x;
  std::cout << "Enter number: ";
  std::cin >> x;
  return x;
};


void task1()
{
    int a = get_integer();
    int b = get_integer();
    std::cout << "A + B = " << a + b << '\n';
}

void task2()
{
    int a = get_integer();
    int b = get_integer();
    std::cout << "A + B = " << a + b << '\n';
    std::cout << "A - B = " << a - b << '\n';
    std::cout << "A * B = " << a * b << '\n';
    std::cout << "A / B = " << a / b << '\n';
}

void task3()
{
    int a = get_integer();
    int b = get_integer();
    std::cout << "c = " << pow(pow(a, 2) + pow(b, 2), 0.5) << "\n";
}

void task4()
{
    int v = get_integer();
    int t = get_integer();
    int res = v * t % 109;
    std::string suffix;
    if (res == 1)
    {
        suffix = "-st";    
    }
    else if (res == 2)
    {
        suffix = "-nd";
    }
    else if (res == 3)
    {
        suffix = "-rd";
    }
    else
    {
        suffix = "-th";
    }
    std::cout << "Vasya will in " << res << suffix << " km of MKAD\n";
}

void task5()
{
    int n, h, m, s;
    n = get_integer();
    h = n / 3600;
    m = n / 60 - h * 60;
    s = n % 60;
    std::cout << "Time: " << h << ":" << m << ":" << s;
}


int main()
{
    std::cout << "- Ex 1\n";
    task1();   
    std::cout << "\n";
    std::cout << "- Ex 2\n";
    task2();
    std::cout << "\n";
    std::cout << "- Ex 3\n";
    task3();   
    std::cout << "\n";
    std::cout << "- Ex 4\n";
    task4();
    std::cout << "\n";
    std::cout << "- Ex 5\n";
    task5();

}
