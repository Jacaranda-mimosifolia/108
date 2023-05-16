#include<stdio.h>
#include<string.h>
//literal string字符串字面量
char a[]="hello";
//创建一个n维的数组，可以存储一个n-1维的字符串
//字符串以'\0'结尾，编译器以读到'\0'停止 
int main()
{
	printf("%s\n%d\n%d",a,strlen(a),sizeof(a));//hello,5,6
	return 0;
} 
