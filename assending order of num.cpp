#include<stdio.h>
int main()
{
	int i,j,a,num[10];
	printf("Enter number in any order\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(num[i]>num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			
			}
		}
	}
	printf("\n no in assd order\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
	
}
