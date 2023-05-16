#include<stdio.h>
#include<string.h>
char message[30]; //利用数组存储 
char message1[30];
char *p_message=message1;//指针指向数组 
int main()
{	
	char a;
	gets(message);//输入可带空格 
	printf("%s",message);//数组输出 
	gets(p_message);
	printf("%s",p_message);//指针输出 
	return 0;
}
