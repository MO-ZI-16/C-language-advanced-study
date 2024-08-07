#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strlen 函数
//strlen函数的返回类型是size_t(无符号整形 unsigned int)

/*
int main()
{
	char arr1[] = "abcdef";//abcdef\0
	char arr2[] = { 'a','b','c' };
	int len = strlen(arr2);//随机值
	
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
//模拟实现strlen函数
//计数器方法
//指针-指针
//递归方式
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
	//name ="zhangsan";//err name数组名是地址,地址是一个常量,不能被赋值
	printf("%s\n", name);
	return 0;
}*/

/*
int main()
{
	char* p = "abcdef";
	char arr[] = "bit";
	strcpy(p, arr);//目标区域不可修改
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
	//1.找到目标字符串的结尾\0
	while (*p1 != '\0')
	{
		p1++;
	}
	//2.拷贝字符串
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}

//找到目标字符串的结尾\0
int main()
{
	char arr1[20] = "hello";
	my_strcat(arr1, "world");
	printf("%s\n", arr1);
	return 0;
}