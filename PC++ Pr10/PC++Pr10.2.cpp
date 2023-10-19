#include <iostream>
using namespace std;

class MyClass
{
	public:
		int data;

		MyClass(int value) : data(value) {}

		void display(){
			cout << "Data : " << data <<endl;
		}
};

int main(){
	//Create an object of MyClass
	MyClass obj(42);

	//Create a pointer to an object of MyClass
	MyClass* ptr = &obj;

	//Access and modify object's members through pointer
	ptr->display(); //Access member function
	cout << "Value of data using pointer : " << ptr->data << endl;

	//Modify object's member through the pointer
	ptr->data = 99;
	cout << "Modified value of data : " << obj.data << endl;

	return 0;
}

