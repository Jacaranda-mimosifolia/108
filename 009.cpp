#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="hello";
	char str2[]="world";
	printf("%s\n",strcpy(str1,str2));
	printf("strcpy(str1,str2)=%d\n",strcpy(str1,str2));//���ص���str1,Ŀ���ַ����ĵ�ַ 
	printf("str1=%d\nstr2=%d\n",str1,str2);
	return 0;
}
