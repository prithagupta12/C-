#include<iostream>
using namespace std;
int  main()
{
	unsigned short ushort_int=65;//65536,65538
	signed short signed_short=-6;//-32769
	int a=999165;
	long int long_int=456789;
	long long int ll_int=999145698784;
	cout<<"sizeof unsigned short="<<sizeof(unsigned short)<<endl;
	cout<<"sizeof signed short="<<sizeof(signed short)<<endl;
	cout<<"sizeof int="<<sizeof(int)<<endl;
	cout<<"sizeof long int="<<sizeof(long int)<<endl;
	cout<<"sizeof long long int="<<sizeof(long long int)<<endl;
	
	cout<<"ushort_int="<<ushort_int<<endl;
	cout<<"signed_short="<<signed_short<<endl;
	cout<<"int a="<<a<<endl;
	cout<<"long_int="<<long_int<<endl;
	cout<<"ll_int="<<ll_int<<endl;
	return 0;
}
