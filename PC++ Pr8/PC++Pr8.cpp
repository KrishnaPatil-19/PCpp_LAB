#include <iostream>
using namespace std;

class MyClass; // Forward declaration

class FriendClass
{
	public:
		// Friend function declaration
		friend void friendFunction(const MyClass& obj);
};

class MyClass
{
	private:
		int data;
	public:
		MyClass(int value) : data(value) {}

		// Friend function definition
		friend void friendFunction(const MyClass& obj);

		void display()
		{
			cout << "Data : " << data << endl;
		}
};
// Friend function definition
void friendFunction(const MyClass& obj)
{
	cout << "Friend function can access MyClass's private data : " << obj.data << endl;
}
int main()
{
	MyClass obj(42);

	cout << "Calling the friend function from main..." << endl;
	friendFunction(obj); // Call the friend function
	
	cout << "Calling the member function from main..." << endl;
	obj.display(); // Call the member function
	return 0;
}

/*#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    // Declaration of the friend function
    friend void displayData(const MyClass& obj);
};

// Definition of the friend function
void displayData(const MyClass& obj) {
    cout << "Data: " << obj.data << endl;
}

int main() {
    MyClass obj(42);

    // Calling the friend function to access private data
    displayData(obj);

    return 0;
}
*/
