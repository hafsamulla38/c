#include<string.h>
int main()
{
	char str1[50]="Hello";
	const char str2[]="lerners";
	strcat (str1,str2);
	printf("%s",str1);
	return 0;
}
