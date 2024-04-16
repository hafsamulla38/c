#include<string.h>
int main()
{
	char a[20]="program";
	char b[20]={"'p','r','o','g','r','a','m',\o'"};
	printf("length of string a=%zu \n",strlen(a));
	printf("length of string b=%zu \n",strlen(b));
	return 0;
}

