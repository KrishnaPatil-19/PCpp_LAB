#include <iostream>
using namespace std;
class Addition
{
	private:
	int a, b;
	public:
	void getNum()
	{
		cout<<"Enter value of a & b : ";
		cin>>a>>b;
	}
	void printSum()
	{
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	}
};
int main()
{
	Addition N;
	N.getNum();
	N.printSum();
	return 0;
}

