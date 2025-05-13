#include<iostream>
using namespace std;
class person{
	private:
		int age;
	public:
		person(){
			age=20;
		}
		person(int a)
		{
			age=a;
		}
		int getage(){
			return age;
		}
};
int main(){
	person person1,person2(45);
	cout<<"Person1 age="<<person1.getage()<<endl;
	cout<<"Person2 age="<<person2.getage()<<endl;
	return 0;
}
