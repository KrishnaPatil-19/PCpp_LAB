#include <iostream>
using namespace std;

class MyClass {
public:
    // Default Constructor
    MyClass() {
        cout << "Default Constructor called" << endl;
    }

    void display() {
        cout << "Inside MyClass" << endl;
    }
};

int main() {
    cout << "Creating an object..." << endl;
    MyClass obj; // Default constructor is called when the object is created

    cout << "Calling a member function..." << endl;
    obj.display();

    return 0;
}
