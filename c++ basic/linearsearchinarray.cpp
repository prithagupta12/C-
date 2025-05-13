#include<stdio.h>
int main()
{
	int num,key,i;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&num);
	int arr[num];
	printf("\nEnter the elements of the array:\n");
	for( i=0;i<num;i++)
	{
		//printf("\narr[%d]=",i+1);
		scanf("%d",&arr[i]);
	}
	for( i=0;i<num;i++)
	{
		//printf("\narr[%d]=",i+1);
		printf(" %d ",arr[i]);
	}
	printf("\nEnter the element you want to search:");
	scanf("%d",&key);
	for( i=0;i<num;i++)
	{
		if(key==arr[i])
		{
			break;
		}
	}
	if(i<num)
	{
		printf("Your searched element is in index %d",(i+1));
	}
	else
	{
		printf("Element is not in array");
	}

	
	return 0;
}
