#include <iostream>
using namespace std;

//Base class
class Animal
{
	public:
		//virtual function
		virtual void makeSound()
		{
			cout<<"Animal makes a generic sound."<<endl;
		}
};
//Derived class 1
class Dog : public Animal
{
	public:
		//Override the virtual function
		void makeSound() override {
			cout<<"Dog barks: Woof! Woof!"<<endl;
		}
};
//Derived class 2
class Cat : public Animal
{
	public:
		//Override the virtual function
		void makeSound() override {
			cout<<"Cat meows: Meow! Meow!"<<endl;
		}
};

int main()
{
	Animal* animal1 = new Dog();
	Animal* animal2 = new Cat();

	//Call the virtual function, which will invoke the appropriate derived class method
	animal1->makeSound();
	animal2->makeSound();

	//Clean up memory
	delete animal1;
	delete animal2;

	return 0;
}

