#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("file1.txt",ios::out);
	if(myfile.is_open()){
		myfile<<"This is my first line"<<endl;
	}
}
