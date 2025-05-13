#include<iostream>
using namespace std;
template<class T>
T sum1(T arr[],int size){
	T sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int a[3]={1,2,3};
	float b[3]={4.2,5.2,6.2};
	cout<<"Sum of int array="<<sum1(a,3)<<endl;
	cout<<"Sum of float array="<<sum1(b,3)<<endl;
	return 0;
}
