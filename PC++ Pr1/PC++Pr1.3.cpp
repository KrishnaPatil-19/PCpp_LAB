#include <iostream>
using namespace std;
int main()
{
	int n, i, m = 0, flag = 0;
	cout<<"Enter a number to check if its Prime : ";
	cin>>n;
	m = n / 2;
	for(i = 2; i <= m; i++)
	{
		if(n % i == 0)
		{
			cout<<n<<" is not a Prime Number."<<endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<n<<" is a Prime number."<<endl;
	}
	return 0;
}

//this logic is easier to understand
/*int main(){
	int n, i;
	i=2;
	cin>>n;
	if(n<i){
		cout<<"no prime";
		return 1;
	}
	while (n>i)
	{
		if((n%i)==0){
			cout<<"no prime";
			return 1;
		}
		i++;
	}
	cout<<"prime";
	return 0;


}*/