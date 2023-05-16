#include<stdio.h>
#include<string.h>
char array[]="hello\0 world!";
char *p;
int main()
{
//编译器打印首地址,若遇到'\0',则停止; 
	printf(array);//打印数组首地址； 
	printf("\n%s\n","hello wor\0ld!");//打印字符串； 
	p=array;//指针指向数组首地址； 
	printf(p);
	p=NULL;
	p="he\0llo world";//指针指向字符串首地址； 
	printf(p);
	return 0;
}
