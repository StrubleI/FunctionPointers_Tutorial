#pragma once
#include <iostream>
#include <vector>

// ==================================
// SECTION 1
// ==================================

// Utility function to print a value.
void printValues(int value) {
    std::cout << "Value: " << value << std::endl;
}

// Higher-order function that applies a function to each element of the vector.
void forEach(const std::vector<int>& vector, void(*func)(int)) {
    for (int value : vector)
        func(value);
}

// Another example function.
void HelloWorld(int a) {
    std::cout << "Hello World! Value: " << a << std::endl;
}

// ==================================
// SECTION 2
// ==================================

int main() {
    // Sample vector.
    std::vector<int> values = { 1, 5, 4, 2, 3 };

    // Applying printValues to each element using forEach.
    forEach(values, printValues);

    // Trying with another function.
    forEach(values, HelloWorld);

    return 0;
}