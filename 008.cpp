#include<stdio.h>
#include<string.h>
char array[]="hello\0 world!";
char *p;
int main()
{
//��������ӡ�׵�ַ,������'\0',��ֹͣ; 
	printf(array);//��ӡ�����׵�ַ�� 
	printf("\n%s\n","hello wor\0ld!");//��ӡ�ַ����� 
	p=array;//ָ��ָ�������׵�ַ�� 
	printf(p);
	p=NULL;
	p="he\0llo world";//ָ��ָ���ַ����׵�ַ�� 
	printf(p);
	return 0;
}
