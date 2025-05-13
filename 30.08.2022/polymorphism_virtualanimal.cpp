#include<iostream>
using namespace std;
class animal{
	public:
		virtual void makesound(){
			cout<<"In virtual.";
		}
};
class cat:public animal{
	public:
		void makesound(){
			cout<<"Meow Meow"<<endl;
		}
};
class dog:public animal{
	public:
		void makesound()
		{
			cout<<"Bow Bow"<<endl;
		}
};
int main()
{
	animal*a=new cat;
	a->makesound();
	animal*b=new dog;
	b->makesound();
	return 0;
}
