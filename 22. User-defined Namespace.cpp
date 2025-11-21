
#include <iostream>
namespace CSE {
    void show() {
        std::cout << "Hello from CSE namespace!" << std::endl;
    }
}
int main() {
    CSE::show();
    return 0;
}
Output:
Inside MathOperations Namespace
Addition = 15
Multiplication = 50

Result: The program successfully demonstrates the use of a namespace to group related functions. It shows how to access functions inside a namespace using the scope resolution operator ::.
