#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int push(char stack[max][80], int *top, char data[80])
{
      if(*top == max -1)
            return(-1);
      else
      {
            *top = *top + 1;
            strcpy(stack[*top], data);
            return(1);
      }
}
int pop(char stack[max][80], int *top, char data[80])
{
      if(*top == -1)
            return(-1);
      else
      {
            strcpy(data, stack[*top]);
            *top = *top - 1;
            return(1);
      }
}
int show(char stack[max][80], int *top, char data[80])
{	
	if(*top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=*top;i>=0;--i)
			printf("%s\n",stack[i]);
	}
}
int main()
{
      char stack[max][80], nm[80];
      int top,ch,reply;
      top = -1;   
      printf("\nOPERATION");
      printf("\n----------------------------\n");
      printf("      1. PUSH\n");
      printf("      2. POP\n");
      printf("      3. SHOW\n");
      printf("      4. EXIT\n");
      printf("----------------------------\n");
      while(1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1 : 
                        printf("\nEnter string : ");
                        scanf("%s",nm);
                        reply = push(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Full.\n");
                        else
                              printf("'%s' is Pushed in Stack.\n\n",nm);
                  break;
                  case 2 : 
                        reply = pop(stack,  &top,nm);
                        if(reply == -1)
                              printf("\n Stack is Empty \n");
                        else
                              printf("Popped string is : %s\n",nm);
                              printf("\n");
                  break;
                  case 3: show(stack,  &top,nm);
					break;
                  case 4 :
                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}
