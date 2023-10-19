#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating an object..." << endl;
    MyClass obj; // Constructor is called when the object is created

    cout << "Doing some work with the object..." << endl;

    // Destructor is called when the object goes out of scope (end of the block)
    cout << "Object is about to go out of scope..." << endl;

    return 0; // Here, the destructor will be called for obj
}
