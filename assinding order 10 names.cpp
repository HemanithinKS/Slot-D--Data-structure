#include<stdio.h>
#include<string.h>
main(){
   int i,j,choice;
   char str[100][100],s[100];
  
   printf("Enter names in any order:\n");
   for(i=0;i<10;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<10;i++){
      for(j=i+1;j<10;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
  
   printf("Enter \n1.assending\n2.desending\n");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
    printf("\nThe sorted order of names are:\n");
   switch(choice)
   {
   	case 2:
   		for(i=10;i>=0;i--){
      printf("%s\n",str[i]);
 }
    case 1:
	for(i=0;i<10;i++){
      printf("%s\n",str[i]); 
	 
   	
   }
   
   }
}
