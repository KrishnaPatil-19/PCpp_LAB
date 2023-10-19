#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Parameterized Constructor
    MyClass(int val) {
        value = val;
        cout << "Parameterized Constructor called with value: " << value << endl;
    }

    void display() {
        cout << "Value inside MyClass: " << value << endl;
    }
};

int main() {
    cout << "Creating an object with a parameterized constructor..." << endl;
    MyClass obj(42); // Parameterized constructor is called with the value 42

    cout << "Calling a member function..." << endl;
    obj.display();

    return 0;
}
