#include<stdio.h>
#include<string.h>
//ASCII  American Standard Code for Intermation Interchange
char array[3]={'a',2,3};
char a[10]="hello";
int b[3]={1,2,3};
int main()
{
	//char��ASCIIS��ֵ��Χ��ƥ�����������'a'Ϊ97��%d���97��%c���a; 
	printf("%d,%c\n",array[0],array[0]);
	printf("%d,%d\n",sizeof(array),sizeof(array[0]));//3,1 char���͵ĳ���
	return 0;
}
