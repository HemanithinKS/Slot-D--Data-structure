#include<stdio.h>                                                               
                                                                                                                                                                                                                                                                          
int main()                                                                     
{                                                                               
  int i, j;                                                              
  int composite = 0;                                                            
                                                       
 printf("composite number form 100 to 1000\n");                                                                               
                             
  for(i = 102;i <=1000;i++)                                                     
  {                                                                             
    composite = 0;                                                              
    for(j = i-1; j > 1 ; j--)                                                   
    {                                                                           
       if(i%j == 0)                                                             
         composite = 1;                                                         
    }                                                                           
    if(composite == 1)                                                          
     printf("%d\t", i);                                                         
  }                                                                             
  printf("\n");                                                                 
}   
