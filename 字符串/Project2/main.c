#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*
int my_strcmp(const char* p1, const char* p2)
{
	
	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)
	{
		return 1;
	}
	else
		return -1;
}
int my_strcmp(const char* p1, const char* p2)
{

	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return (*p1 - *p2);
	
}
int main()
{
	char arr1[20] = "zhangsan";
	char arr2[] = "zhangsanf";
	//ʹ��strcmp���Ƚ������Ƿ����

	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
	{
		printf("<\n");
	}
	else if (ret == 0)
		printf("==\n");
	else
		printf(">\n");
	
	//�Ƚ�һ�������ַ���
	//arr1��������,����������Ԫ�ص�ַ
	//arr2��������,����������Ԫ�ص�ַ
	//����Ƚϵ��������ĵ�ַ,�����������ַ���������
	//if (arr1 == arr2)
	//{
	//	printf("==\n");
	//}
	//else
	//{
	//	printf("!=\n");
	//}
	
	return 0;
}*/
/*
int main()
{
	char arr[4] = { 0 };
	strcpy(arr, "hello bit");//�ǻᱨ���
	printf("%s\n", arr);
	return 0;
}

//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp

int main()
{
	char arr1[20] =  "abcde" ;
	char arr2[] = "hello bit";
	strncpy(arr1, arr2, 5);
	printf("%s\n", arr1);
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[]="abc";
	int ret = strncmp(arr1, arr2, 9);
	if (ret == 0)
	{
		printf("==\n");
	}
	else if(ret<0)
		printf("<\n");
	else
		printf(">\n");
	return 0;
}
*/
/*
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)p;
		p++;
	}
	return NULL;
}
int main()
{
	char email[] = "atrs@bitejieyeke";
	char substr[] = "bitejieyeke";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
		printf("�Ӵ�������");
	else
		printf("%s\n", ret);
	return 0;
}*/

//
//strtok
//�и��ַ���
//
//zhangpengwei@giasdf
//
//

int main()
{
	const char* sep = "@.";
	char email[] = "zhangpengwei@giasdf.com";
	char cp[30] = { 0 };
	strcpy(cp, email);

	char* ret = strtok(cp, sep);
	printf("%s\n", ret);
	//ret= strtok(NULL, sep);
	//printf("%s\n", ret);
	//ret = strtok(NULL, sep);
	//printf("%s\n", ret);
	return 0;
}