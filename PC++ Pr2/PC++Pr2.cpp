#include <iostream>
using namespace std;
void print()
{
	cout<<"\n-----------------";
}
void print(int a)
{
	cout<<"\n";
	for(int i = 1; i <= a; i++)
	{
		cout<<"#";
	}
}
void print(int a, char c)
{
	cout<<"\n";
	for(int i = 1; i <= a; i++)
	{
		cout<<c;
	}
}
int main()
{
	int x;
	cout<<"\nEnter number : ";
	cin>>x;
	print();
	print(x);
	print(x, '$');
	return 0;
}

