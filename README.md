# 🎯 Function Pointers in C++

Function pointers in C++ allow you to store the address of a function and call it indirectly. They are a versatile feature that enables **dynamic behavior** by passing functions as arguments to other functions, creating customizable algorithms.

---

## 📚 Key Concepts

### 🔧 What Are Function Pointers?
A function pointer stores the address of a function and can be used to invoke it. For example:
```cpp
void myFunction(int value) {
    std::cout << "Value: " << value << std::endl;
}
void (*functionPointer)(int) = myFunction;
functionPointer(5); // Calls myFunction with the argument 5.
```

✨ Why Use Them?
Customization: Pass logic to algorithms or loops.
Abstraction: Decouple functionality from specific implementations.
Callbacks: Implement event-driven programming or library hooks.

🚨 Important Syntax Details
Declaring a function pointer:

```cpp
returnType (*pointerName)(parameterTypes);
```

Example:
```cpp
void (*funcPointer)(int) = myFunction;
```

Using typedef for simplicity:
```cpp
typedef void(*FunctionType)(int);
FunctionType func = myFunction;
```

Using auto for implicit types:
```cpp
auto func = myFunction; // Implicitly deduces the type.
```

🚀 Example: Passing Functions as Arguments
Here’s a practical example that uses function pointers to iterate through a vector and apply a custom function to each element.

```cpp
#pragma once
#include <iostream>
#include <vector>

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

int main() {
    // Sample vector.
    std::vector<int> values = { 1, 5, 4, 2, 3 };

    // Applying printValues to each element using forEach.
    forEach(values, printValues);

    // Trying with another function.
    forEach(values, HelloWorld);

    return 0;
}

```

🔥 Output Explanation

When you run the program:

printValues is applied to each element in the vector:
```cpp
Value: 1
Value: 5
Value: 4
Value: 2
Value: 3
```

HelloWorld is applied to each element:
```cpp
Hello World! Value: 1
Hello World! Value: 5
Hello World! Value: 4
Hello World! Value: 2
Hello World! Value: 3
```
> [!WARNING]
> Ensure the function signature of the pointer matches the function you’re assigning; mismatches can lead to undefined behavior.

Happy coding! 🚀
