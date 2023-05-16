#include<stdio.h>
#include<string.h>
//在编译期分配字符串的空间 
//*message==message[],指针指向了字符串的首地址 
char *message="hello world!";
//waring:deprecated conversion from string constant to 'char*' 
int main()
{
	int length=strlen(message);
//	printf("%d",length);
	for(int i=0;i<length;i++)
	{
		printf("%c",*(message+i));
	}
	return 0;
 } 
