#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],r,c,i,j,k,left=0,right=0;
		printf("Enter the number of rows:");
		scanf("%d",&r);
		printf("Enter the number of coloumn:");
		scanf("%d",&c);
		if(r==c)
		{
		printf("Enter the  matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
	
		
		
		for(i=0;i<r;i++)
		{
			left=left+a[i][i];
			right=right+a[i][r-i-1];
			
			
		}
		printf("Matrix A\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("Sum of right diagnal is %d",left);
		printf("\nSum of left diagnal is %d",right);
	  }
	  else
	  {
	  	printf("Entered matrix is not a square matix !");
	  }
	
return 0;		
}
