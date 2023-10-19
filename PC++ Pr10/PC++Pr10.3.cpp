#include <iostream>
using namespace std;

// Function that adds two numbers
int add(int a, int b) {
    return a + b;
}

// Function that subtracts two numbers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declare a pointer to a function that takes two integers and returns an integer
    int (*operation)(int, int);

    // Assign the pointer to the add function
    operation = add;

    // Use the pointer to call the add function
    int result = operation(10, 5);
    cout << "Result of addition: " << result << endl;

    // Reassign the pointer to the subtract function
    operation = subtract;

    // Use the pointer to call the subtract function
    result = operation(10, 5);
    cout << "Result of subtraction: " << result << endl;

    return 0;
}
