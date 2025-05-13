#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	fstream myfile;
	string s;
	myfile.open("file1.txt",ios::in);
	if(myfile.is_open())
	{
		while(getline(myfile,s))
		{
			cout<<s<<endl;
		}
	}
	myfile.close();
}
