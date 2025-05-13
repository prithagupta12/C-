#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b){
	return a+b;
}
int main()
{
	cout<<"Sum of int="<<sum(2,5);
	cout<<"Sum of float="<<sum(2.2,5.5);
	cout<<"Sum="<<sum<float>(2,5.5);
	return 0;
}
