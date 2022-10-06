#include<stdio.h>
int main()
{
	int n,arr[15],first,last,middle,key,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter the elements in array:-\n");
	
	for(i=0;i<n;i++)
	{
		printf("Position %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element u wanna search:");
	scanf("%d",&key);
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	while(first<=last)
	{
		if(arr[middle]<key)
		{
			first=middle+1;
		}
		else if(arr[middle]==key)
		{
			printf("Element %d is found in Position %d.",key,middle+1);
			break;
		}
		
		else
		{
			last=middle-1;
	    }
		middle=(first+last)/2;		
	}
	
	if(first>last)
	{
		printf("%d is not found in list.",key);
	}
	return 0;
}
