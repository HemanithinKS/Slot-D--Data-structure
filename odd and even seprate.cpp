#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter the numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers:\n");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}	
	}
	printf("odd numbers:\n");
		for(i=0;i<10;i++)
	{
	    if(arr[i]%2==1)	
		{
			printf("%d\n",arr[i]);
		}
    }
}
