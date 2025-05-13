#include<iostream>
using namespace std;
int main()
{
	int aq1[5],aq2[5],i,j,g1,g2;
	int count1=0;
	int count2=0;
	cout<<"Enter the price of cheaper gift:"<<endl;
	cin>>g1;
	cout<<"Enter the price of costlier gift:"<<endl;
	cin>>g2;
	cout<<"Enter the responses of question 1"<<endl;
	for(i=1;i<=5;i++)
	{
		    cout<<"Player"<<i<<endl;
		    cin>>aq1[i];
			count1=count1+aq1[i];
	}
	cout<<"Total gifts for ques1: "<<count1<<endl;
	cout<<"Enter the responses of question 2"<<endl;
	for(j=1;j<=5;j++)
	{
		    cout<<"Player"<<j<<endl;
		    cin>>aq2[j];
			count2=count2+aq2[j];
	}
	cout<<"Total gifts for ques2: "<<count2<<endl;
	if(count1>=count2)
	{
		cout<<"Cost="<<(count2*g1)<<endl;
	}
	else
	{
		cout<<"Cost="<<(count1*g1)<<endl;
	}
	return 0;
}
