#include<iostream>
#include<string.h>
using namespace std;
class binary{
	string s;
	public:
		void read();
		void check_binary();
		void ones_compliment();
		void display();		
};
void binary::read(){
	cout<<"Enter the binary number:"<<endl;
	cin>>s;
}
void binary::check_binary(){
	for(int i=0; i< s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"Incorrect binary format"<<endl;
			//exit(0);
			break;
		}
	}
}
void binary::ones_compliment(){
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else if(s.at(i)=='1')
		{
			s.at(i)='0';
		}
	}
}
void binary::display(){
	cout<<"Displaying your binary number:"<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i)<<"  "<<endl;
	}
}
int main()
{
	binary b;
	b.read();
	b.check_binary();
	b.display();
	b.ones_compliment();
	b.display();
	
	return 0;
}
