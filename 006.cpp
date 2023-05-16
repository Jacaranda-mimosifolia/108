#include<stdio.h>
#include<string.h>
char myputs(const char*str);
const char message[]="hello world!";//数组名 
const char *p_message="good morning!";//指针变量名 


int main()
{
	myputs(message);//传入首地址 
	myputs(p_message);//传入首地址 
	return 0;
}

char myputs(const char *str)
{
	int length=strlen(str);
	for(int i=0;i<length;i++)
	{
		printf("%c",*(str+i));
	}
	printf("\n");
	return 0;
}
