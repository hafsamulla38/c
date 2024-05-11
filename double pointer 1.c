#include<stdio.h>
#include<conio.h>
int main()
{
	int number=50;
	int *p;
	//pointer to int
	int **p2;
	//pointer to pointer 
	p=&number;
	p2=&p;
	printf("address of number variable is %x \n",&number);
	printf("address of p variable is %x \n",&p);
	printf("value of *p variable is %d \n",*p);
	printf("address of p2 variable is %x \n",p2);
	printf("value of **pp variable %d \n",*p);
	return 0;
	
}
