#include<stdio.h>
#include<string.h>
char myputs(const char*str);
const char message[]="hello world!";//������ 
const char *p_message="good morning!";//ָ������� 


int main()
{
	myputs(message);//�����׵�ַ 
	myputs(p_message);//�����׵�ַ 
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
