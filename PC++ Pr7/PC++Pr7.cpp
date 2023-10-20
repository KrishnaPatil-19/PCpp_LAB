#include <iostream>
using namespace std;

class Complex
{
	private:
		double real;
		double imaginary;
	public:
		Complex(double r, double i) : real(r), imaginary(i) {}
		friend Complex operator+(const Complex& c1, const Complex& c2);

		void display()
		{
			cout << real << " + " << imaginary << "i" << endl;
		}
};

//Definition of the friend function for operator overloading
Complex operator+(const Complex& c1, const Complex& c2)
{
	// Add the real and imaginary parts seperately
	double realSum = c1.real + c2.real;
	double imagSum = c1.imaginary + c2.imaginary;
	return Complex(realSum, imagSum);
}
int main()
{
	Complex num1(3.0, 2.5);
	Complex num2(1.5, 4.0);

	Complex sum = num1 + num2; // Operator overloading using friend function
	
	cout << "Sum : ";
	sum.display();

	return 0;
}



/*#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Friend function for addition operator overloading
    friend Number operator+(const Number& num1, const Number& num2);

    // Display function to print the number
    void display() {
        cout << "Value: " << value << endl;
    }
};

// Definition of the friend function for addition operator overloading
Number operator+(const Number& num1, const Number& num2) {
    int sum = num1.value + num2.value;
    return Number(sum);
}

int main() {
    Number num1(5);
    Number num2(10);

    // Operator overloading using friend function
    Number result = num1 + num2;

    cout << "Sum: ";
    result.display();

    return 0;
}
*/