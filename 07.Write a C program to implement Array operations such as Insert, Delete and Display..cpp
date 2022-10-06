//7.Write a C program to implement Array operations such as Insert, Delete and Display.
#include<stdio.h>
int main(){
	int a[100],n,d,i,choice,ans = 1;
	printf("Enter How many elements you want to insert : ");
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		printf("Position %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nWhat operation do you want to perform : \n");
	printf("1.Insert \n2.Delete \n3.Display\n");
	while(ans){
		printf("Enter your Choice : ");
		scanf("%d",&choice);
		if(choice == 1){
			int pos,e;
			printf("Enter at which position do you want to insert the Element : ");
			if(!(scanf("%d",&pos)) || pos <= 0 || pos > n){
				printf("Invalid Input!!\n");
			}
			else{
				printf("Enter the element : ");
				scanf("%d",&e);
				for(i = n - 1 ;i >= pos-1 ;i--){
					a[i + 1] = a[i];
				}
				a[pos - 1] = e;
				n++;
				printf("\nthe array after insertion is : \n");
				for(i = 0; i< n;i++){
					printf("%d\t",a[i]);
				}
				printf("\n");
			}
		}
		else if(choice == 2){
			int pos;
			printf("At which Position do you want to Delete : ");
			if(!(scanf("%d",&pos)) || pos <= 0 || pos > n){
				printf("Invalid Input!!\n");
			}
			else{
				for(i = pos-1 ;i < n-1 ;i++){
					a[i] = a[i+1];
				}
				printf("\nthe array after deletion is : \n");
				for(i = 0; i<n-1;i++){
					printf("%d\t",a[i]);
				}
				printf("\n");
			}
		}
		else if(choice == 3){
			printf("The Elements in the array are : \n");
			for(i = 0; i < n-1; i++){
				printf("%d\t",a[i]);
			}
			printf("\n");
		}
		else{
			printf("Enter Invalid Input!!");
			printf("\n");
		}
		printf("\nDo you want to Continue ? ");
		scanf("%d",&ans);
	}
	return 0;
}

