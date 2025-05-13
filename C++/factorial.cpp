#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"Enter the num:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial="<<fact;
	return 0;
}
