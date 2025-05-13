#include<iostream>
#include<string.h>
using namespace std;
class test{
	char st[50];
	public:
		void getst(){
			cout<<"Enter the string:";
			cin>>st;
			
		}
		test operator +(test t2){
			test t3;
			strcpy(t3.st,st);
			strcat(t3.st,t2.st);
			cout<<t3.st;
		}
};
int main()
{
	test t1,t2;
	t1.getst();
	t2.getst();
	t1 + t2; //t1.operator(test t2)
}
