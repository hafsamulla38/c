#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p;
	int **pp;
	p=&a;
	//pointer p is pointing to address of a
	pp=&p;
	//pointer pp is pointing to address of a
	printf("address of a %x \n",p);
	printf("address of p %x \n",pp);
	printf("value stored at p %d \n",*p);
	printf("value stored at pp %d \n",**pp);
	return 0;
}
