#include<stdio.h>
#include<string.h>
//literal string�ַ���������
char a[]="hello";
//����һ��nά�����飬���Դ洢һ��n-1ά���ַ���
//�ַ�����'\0'��β���������Զ���'\0'ֹͣ 
int main()
{
	printf("%s\n%d\n%d",a,strlen(a),sizeof(a));//hello,5,6
	return 0;
} 
