#include<iostream>
using namespace std;
int main()
{
	int n,price,smallest;
	cout<<"Enter the price of the cheaper gift:"<<endl;
	cin>>price;
	cout<<"Enter the num of ques:"<<endl;
	cin>>n;
	int a[5][n],i,j,g1,g2,b[n];
	int count=0;
	for(j=1;j<=n;j++)
	{
		cout<<"Enter the response of ques "<<j<<endl;
		for(i=1;i<=5;i++)
		{
			cout<<"Player"<<i<<endl;
			cin>>a[i][j];
		}
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=5;i++)
		{
			count=count+a[i][j];
		}
		cout<<"total gifts of ques "<<j<<" is "<<count<<endl;
		b[j]=count;
		count=0;
	}
	
	for(j=1;j<=n;j++)
	{
		cout<<b[j]<<"  "<<endl;
	}
	smallest=b[1];
	for(j=1;j<=n;j++)
	{
		if(b[j]<b[1])
		{
			smallest=b[j];
		}
	}
	cout<<"Cost="<<(smallest*price);
	
	return 0;
}
