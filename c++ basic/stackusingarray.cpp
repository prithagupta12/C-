#include<stdio.h>
int arr[50];
void display(int);
int main()
{
	int top=-1,max,ch,value;
	printf("Enter the number of elements you want in the stack:");
	scanf("%d",&max);
	while(1)
	{
		printf("Enter your choice");
		printf("1.Push or 2.Pop?\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					if(top==max-1)
					{
						printf("Stack overflow.\n");
					}
					else
					{
						top++;
						printf("Enter the value:");
						scanf("%d",&value);
						arr[top]=value;
					}
					break;
				}
			case 2:
			{
				if(top<0)
				{
					printf("Stack underflow.\n");
				}
				else
				{
					top=top-1;
				}
				break;
			}
			default:
			{
				printf("Invalid.\n");
			}
			
		}
			display(top);	
		}
		return 0;
}
void display(int top)
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("Element%d=%d\n",i,arr[i]);
	}
}

