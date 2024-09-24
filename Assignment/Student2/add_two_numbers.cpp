#include <iostream>

int addTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 10;
    std::cout << "Sum: " << addTwoNumbers(a, b) << std::endl;
    return 0;
}