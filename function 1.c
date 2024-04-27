//no argument passed and no return value

#include<stdio.h>
#include<conio.h>
void checkprimenumber();
int main()
{
	checkprimenumber();
	//argument is not passed
	return 0;
}
//return type is void meaning does not return any value
void checkprimenumber()
{
	int n,i,flag=0;
	printf("enter a positive integer");
	scanf("%d",&n);
	//0 and 1 are not a prime numbers
	if(n==0||n==1)
	flag=1;
	for(i=2;i<=n/2;++i)
	{
		if(n% i==0)
	flag=1;
	break;
}

	if (flag==1)
	printf("%d is not a prime number",n);
	else
	printf("%d is a prime number",n);
}
