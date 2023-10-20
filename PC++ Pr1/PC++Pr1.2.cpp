#include <iostream>
using namespace std;
int main()
{
	int i;
	float sum = 0, avg;
	for(i = 1; i <= 10; i++)
	{
		sum += i;
		cout<<i<<"";
	}
	avg=sum / --i;
	cout<<"\nSum = "<<sum;
	cout<<"\nAverage = "<<avg;
}

