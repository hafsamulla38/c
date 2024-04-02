#include<stdio.h>
#include<conio.h>
main()
{
	int s1,s2,s3,s4,s5,s6,t;
	float p;
	printf("enter marks of s1");
	scanf("%d",&s1);
	printf("enter marks of s2");
	scanf("%d",&s2);
	printf("enter marks of s3");
	scanf("%d",&s3);
	printf("enter marks of s4");
	scanf("%d",&s4);
	printf("enter marks of s5");
	scanf("%d",&s5);
	printf("enter marks of s6");
	scanf("%d",&s6);
	t=s1+s2+s3+s4+s5+s6;
	printf("the total=%d",t);
	p=t/6;
	printf("the persentage=%f",p);
	getch();
}
