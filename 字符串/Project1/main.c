#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strlen ����
//strlen�����ķ���������size_t(�޷������� unsigned int)

/*
int main()
{
	char arr1[] = "abcdef";//abcdef\0
	char arr2[] = { 'a','b','c' };
	int len = strlen(arr2);//���ֵ
	
	printf("%d\n", len);

	return 0;
}

int main()
{
	if (strlen("abc") - strlen("asfabc") > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}

	return 0;
}
*/
/*
#include <assert.h>
//ģ��ʵ��strlen����
//����������
//ָ��-ָ��
//�ݹ鷽ʽ
size_t my_strlen(const char *str)
{
	int count = 0;
	assert(str);
	if (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcsef";
	my_strlen(arr);
	return 0;
}
*/

/*
int main()
{
	char name[20] = { 0 };
	//name 
	//string copy
	//
	char arr[] = { 'a','b','c','\0'};
	strcpy(name, arr);
	//name ="zhangsan";//err name�������ǵ�ַ,��ַ��һ������,���ܱ���ֵ
	printf("%s\n", name);
	return 0;
}*/

/*
int main()
{
	char* p = "abcdef";
	char arr[] = "bit";
	strcpy(p, arr);//Ŀ�����򲻿��޸�
	return 0;
}*/
#include <assert.h>
/*
void my_strcpy(char* p2, const char* p1)
{
	assert(p2);
	assert(p1);
	//while(*p1)
	//{
	//	*p2 = *p1;
	//	p2++;
	//	p1++;
	//}
	while (*p2++ = *p1++)
	{
		;
	}
	
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
*/

char* my_strcat(char* p1, const char* p2)
{
	char* ret = p1;
	assert(p1 && p2);
	//1.�ҵ�Ŀ���ַ����Ľ�β\0
	while (*p1 != '\0')
	{
		p1++;
	}
	//2.�����ַ���
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}

//�ҵ�Ŀ���ַ����Ľ�β\0
int main()
{
	char arr1[20] = "hello";
	my_strcat(arr1, "world");
	printf("%s\n", arr1);
	return 0;
}