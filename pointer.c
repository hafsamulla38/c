#include<stdio.h>
#include<conio.h>
int main()
{
	int number=50;
	int *p;
	p=&number;
	//stores the address 
	printf("Address of p variable %x\n",p);
	printf("value of p varible %d\n",*p);
	//p contains the address of number therefore printing gives the address of number 
	//As we know that * is used tp therefore if we print *p we will gwt address contained 
	return 0;
}
