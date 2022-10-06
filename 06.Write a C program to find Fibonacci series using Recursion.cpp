#include<stdio.h>

int fibo(int n){

static int m1=0,m2=1,m3;

if(n>0){

m3 = m1 + m2;

m1 = m2;

m2 = m3;

printf(" %d",m3);

fibo(n-1);

}

}

int main(){

int n;

printf("Please enter your preferred number of elements here:");

scanf("%d",&n);

printf("The Fibonacci Series will be: ");

printf(" %d %d",0,1);

fibo(n-2); 

return 0;

}
