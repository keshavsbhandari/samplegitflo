#include <iostream>
#include <cassert>

int addTwoNumbers(int a, int b);  // Declaration of the function to test

void runTests() {
    // Test Case 1
    assert(addTwoNumbers(2, 3) == 5);
    std::cout << "Test 1 passed!" << std::endl;

    // Test Case 2
    assert(addTwoNumbers(-1, 1) == 0);
    std::cout << "Test 2 passed!" << std::endl;

    // Test Case 3
    assert(addTwoNumbers(0, 0) == 0);
    std::cout << "Test 3 passed!" << std::endl;

    // Test Case 4
    assert(addTwoNumbers(-5, -7) == -12);
    std::cout << "Test 4 passed!" << std::endl;

    // Test Case 5
    assert(addTwoNumbers(123456, 654321) == 777777);
    std::cout << "Test 5 passed!" << std::endl;

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}