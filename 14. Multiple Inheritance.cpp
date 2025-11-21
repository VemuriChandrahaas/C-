
#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    void getA() { cout << "Enter A: "; cin >> a; }
};

class B {
protected:
    int b;
public:
    void getB() { cout << "Enter B: "; cin >> b; }
};

class C : public A, public B {
public:
    void display() { cout << "Sum: " << a + b << endl; }
};

int main() {
    C obj;
    obj.getA();
    obj.getB();
    obj.display();
    return 0;
}
Output:
Enter Roll Number: 101
Enter marks of two subjects: 78 89
Roll Number: 101
Total Marks: 167


Result:
Multiple inheritance was implemented successfully.
The derived class inherited properties from two base classes.

       
