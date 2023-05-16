#include<stdio.h>
#include<string.h>
//puts(const char*s);
//指针变量名，数组名
char message[]="hello world!";
char *p_message="good morning!";
int main()
{
	puts(message);//数组名 
	puts(p_message);//指针变量名 
	puts("Dear Yang");//字符串 
	return 0;
}

