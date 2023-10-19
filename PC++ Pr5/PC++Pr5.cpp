#include <iostream>
using namespace std;
class Base
{
	public:
		int x;
	void getData()
	{
		cout<<"Enter the value of x : ";
		cin>>x;
	}
};
class Derived : public Base
{
	private:
		int y;
	public:
		void readData()
		{
			cout<<"Enter the value of y : ";
			cin>>y;
		}
		void product()
		{
			cout<<x<<" * "<<y<<" = "<<x*y;
		}
};
int main()
{
	Derived a;
	a.getData();
	a.readData();
	a.product();
	return 0;
}

