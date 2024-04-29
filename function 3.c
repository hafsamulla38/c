//argument passed but no return value

#include<stdio.h>
#include<conio.h>
void checkPrime and display(int n)
int main()
{
	int n;
	printf("Enter a positive integer");
	scanf("%d",&n);
	//n is passed to function 
	checkPrime and display(n);
	return 0;
}
void checkPrime and display(int n)
{
	int i,flag=0;
	//0 and 1 are not a prime number
	if(n==0||n==1)
	flag=1;
	for(i=2;i<n/2;++i)
	{
		if (n%1==0)
		{
			flag=1;
			break ;
		}
	}
	if(flag==1)
	printf("%d is not prime number",n);
	else
	printf("%d is a prime number",n);/
}
