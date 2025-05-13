#include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,fibo,i,n;
	cout<<"Enter the number:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			fibo=i;
		}
		else
		{
			fibo=n1+n2;
			n1=n2;
			n2=fibo;
		}
		cout<<endl<<fibo; //cout<<"		"<<fibo;
	}
	
	return 0;
}
