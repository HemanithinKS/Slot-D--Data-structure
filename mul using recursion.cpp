#include<stdio.h>
int mul(int a,int b){

    return  a* b;
}
  
int main()
{
	int a,b;
	printf("Enter a and b:\n");
	scanf("%d %d",&a,&b);
	printf("%d*%d=%d",a,b,mul(a,b));
}   
