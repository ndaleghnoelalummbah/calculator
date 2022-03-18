#include<stdio.h>
float add();
float subtract();
float divide();
float multiply();
int main(void)	
{
	char choice;
	float x,y;
	while(1)
	{
		printf("enter choice of operation:");
		scanf("%c",&choice);
		fflush(stdin);	
		if(choice=='+')
		add(x,y);
		if(choice=='-')
		subtract(x,y);
		if(choice=='*')
		multiply(x,y);
		if(choice=='/')
		divide(x,y);
	}

	return 0;
}
float add()
	{
		//
	}

float subtract()
	{
		//
	}
float multiply()
	{
		//
	}
float divide()
	{
		//
	}



