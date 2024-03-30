//add,sub,mul,div use run time value
#include<stdio.h>
#include<conio.h>
 int main()
{
	int a,b,c;
	printf("enter the number a");
	scanf("%d",&a);
	printf("enter the number b");
	scanf("%d",&b);
	c=a+b;
	printf("add=%d",c);
	c=a-b;
	printf("sub=%d",c);
	c=a*b;
	printf("mul=%d",c);
	c=a/b;
	printf("div=%f",c);
	
}

