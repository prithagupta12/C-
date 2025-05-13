#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],i;
	cout<<"Enter the values of array1:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the values of array2:";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<5;i++)
	{
		cout<< a[i]+b[i] <<"  "; //	cout<< a[i]+b[i] <<endl;
	}
	return 0;
}
