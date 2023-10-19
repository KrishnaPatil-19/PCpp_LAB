#include <iostream>
using namespace std;

// Pointer to Pointer (Double Pointer) Example
void pointerToPointerExample() {
    int value = 42;
    int* ptr = &value;     // Pointer to an integer
    int** ptrToPtr = &ptr; // Pointer to a pointer

    cout << "Pointer to Pointer Example:" << endl;
    cout << "Value: " << value << endl;
    cout << "Value using ptr: " << *ptr << endl;
    cout << "Value using ptrToPtr: " << **ptrToPtr << endl;
    cout << endl;
}

// Pointer to Objects Example
class MyClass {
public:
    int data;

    MyClass(int value) : data(value) {}

    void display() {
        cout << "Data: " << data << endl;
    }
};

void pointerToObjectsExample() {
    MyClass obj(42);
    MyClass* ptr = &obj;

    cout << "Pointer to Objects Example:" << endl;
    ptr->display();          // Access member function
    cout << "Value using pointer: " << ptr->data << endl; // Access member variable

    ptr->data = 99;          // Modify member variable
    cout << "Modified value: " << obj.data << endl;
    cout << endl;
}

// Pointer to Function Example
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void pointerToFunctionExample() {
    int (*operation)(int, int); // Pointer to a function

    cout << "Pointer to Function Example:" << endl;
    operation = add;
    int result = operation(10, 5);
    cout << "Result of addition: " << result << endl;

    operation = subtract;
    result = operation(10, 5);
    cout << "Result of subtraction: " << result << endl;
}

int main() {
    pointerToPointerExample();
    pointerToObjectsExample();
    pointerToFunctionExample();

    return 0;
}
