#include<stdio.h>
#include<string.h>
//�ڱ����ڷ����ַ����Ŀռ� 
//*message==message[],ָ��ָ�����ַ������׵�ַ 
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
