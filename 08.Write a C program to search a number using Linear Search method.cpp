#include<stdio.h>

int main()
{
	int arr[15],i,n,key,found=0;
	printf("Enter no of elements in array:");
	scanf("%d",&n);
	printf("Enter Your no in the array:-\n");
	for(i=0;i<n;i++)
	{
		printf("Position %d:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("enter your elements to be found:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	
	if(found==1)
	{
		printf("Element %d is found in Position %d.",key,i);
	}
	else
	{
		printf("Element %d is not found in array.",key);
	}
	
}

