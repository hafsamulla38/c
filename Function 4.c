//argument passed and return a value

#include<stdio.h>
#include<conio.h>
int checkPrimenumber (int n);
int main()
{
	int n,flag;
	printf("enter a positive integer");
	scanf("%d",&n);
	//n is passed to the check prime number () function
	flag=checkPrimenumber (n);
	if (flag==1)
	printf("%d is not a Primenumber",n);
	return 0;
}
//int is returned
int checkPrimenumber (int n)
{
	//0 and 1 are not prime number
	if(n==0||n==1)
	return 1;
	int i;
	for(i==2;i<n/2;i++)
	{
		if(n%i==0)
		return i;
	}
	return 0;
}
