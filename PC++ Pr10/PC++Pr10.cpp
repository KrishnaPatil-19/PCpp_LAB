#include <iostream>
using namespace std;

int main() {
    int number = 42;
    double pi = 3.14159;
    char letter = 'A';

    // Declare and initialize pointers
    int* intPtr = &number;
    double* doublePtr = &pi;
    char* charPtr = &letter;

    // Display the values through pointers
    cout << "Value of number using intPtr: " << *intPtr << endl;
    cout << "Value of pi using doublePtr: " << *doublePtr << endl;
    cout << "Value of letter using charPtr: " << *charPtr << endl;

    // Modify values through pointers
    *intPtr = 10;
    *doublePtr = 2.71828;
    *charPtr = 'B';

    // Display the modified values
    cout << "Modified value of number: " << number << endl;
    cout << "Modified value of pi: " << pi << endl;
    cout << "Modified value of letter: " << letter << endl;

    return 0;
}
