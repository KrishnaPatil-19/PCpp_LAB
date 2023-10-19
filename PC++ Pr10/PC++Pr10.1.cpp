#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int* ptr = &number; // Pointer to an integer
    int** ptrToPtr = &ptr; // Pointer to a pointer to an integer (double pointer)

    // Display the values
    cout << "Value of number: " << number << endl;
    cout << "Value of number using ptr: " << *ptr << endl;
    cout << "Value of number using ptrToPtr: " << **ptrToPtr << endl;

    // Modify the value through ptrToPtr
    **ptrToPtr = 99;

    // Display the modified value
    cout << "Modified value of number: " << number << endl;

    return 0;
}
