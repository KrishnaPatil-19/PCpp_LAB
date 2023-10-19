#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {
        cout << "Constructor called with value: " << data << endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) : data(other.data) {
        cout << "Copy Constructor called with value: " << data << endl;
    }

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2 = obj1; // Copy constructor is called

    obj1.display();
    obj2.display();

    return 0;
}
