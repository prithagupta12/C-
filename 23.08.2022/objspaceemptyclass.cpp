#include<iostream>
using namespace std;
class emptyclass{
	
};
int main()
{
	emptyclass*p1=new emptyclass;
	emptyclass*p2=new emptyclass;
	if(p1==p2)
	{
		cout<<"Not possible";
	}
	else
	{
		cout<<"Possible";
	}
	return 0;
}
