
#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) { a = x; b = y; }
    void display() { cout << "Sum: " << a + b << endl; }
};

int main() {
    Calculator<int> c1(10, 20);
    Calculator<float> c2(2.5, 3.7);
    c1.display();
    c2.display();
    return 0;
}
Output:
Integer Calculation 
Numbers: 10 and 5
Addition = 15
Subtraction = 5

Float Calculation 
Numbers: 10.5 and 4.2
Addition = 14.7
Subtraction = 6.3

Result: The program successfully implements the use of a class template in C++.**
