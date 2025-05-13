#include<stdio.h>
int main()
{
	int x[4],y[4],search;
	float f,f1;
	printf("Enter the values of x:");
	for(int i=0;i<4;i++)
	{
		printf("\nx%d=",i);
		scanf("%d",&x[i]);
	}
	printf("Enter the values of y:");
	for(int i=0;i<4;i++)
	{
		printf("\ny%d=",i);
		scanf("%d",&y[i]);
	}
	printf("Enter the value of x where you want y:");
	scanf("%d",&search);
	
	for(int t=0;t<4;t++)
	/*{
		for(int j=0;j<3;j++)
		{*/
			f=(search-x[j+1])/(x[0]-x[j+1]);
		}
		f*=y[t];
		f1+=f;
	}
	printf("f1=%f",f1);
}
