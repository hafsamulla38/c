#include<string.h>
int main()
{
	char str1[]="abcd",str2[]="abcd",str3[]="abcd";
	int result;
	result=strcmp(str1,str2);
	printf("strcmp(str1,str2)=%d\n",result);
	result=strcmp(str1,str3);
	printf("strcmp(str1,str3)=%d\n",result);
	return 0;
}
//strcmp(str1,str2)=1
//strcmp(str1,str3)=0

