#include<stdio.h>
#include<string.h>
char message[30]; //��������洢 
char message1[30];
char *p_message=message1;//ָ��ָ������ 
int main()
{	
	char a;
	gets(message);//����ɴ��ո� 
	printf("%s",message);//������� 
	gets(p_message);
	printf("%s",p_message);//ָ����� 
	return 0;
}
