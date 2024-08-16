#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int a = 10;//4个字节
	int arr[10];//40个字节

	return 0;
}
*/

//动态内存管理
//函数:malloc,free,calloc,realloc
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//
//变长数组(c99标准才支持)
//int n = 0;
//scanf("%d", &n);
//int arr[n]

/*
int main()
{
	int arr[10] = { 0 };
	int* p =(int *) malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}

	free(p);
	p = NULL;
	//没有free
	//并不是说内存空间就不会回收了
	//当程序退出的时候,系统会自动回收内存空间

	return 0;
}

int main()
{
	return 0;
	int a = 10;
	int* p = &a;

	//这个无法释放空间,会报错,因为int a = 10在栈区,而free释放堆区空间
	free(p);
	p = NULL;
	return 0;
}
*/

/*
//开辟10个整形的空间
//calloc函数
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//打印
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
*/

//realloc 调整函数
int main()
{
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr = (int *)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;
	return 0;
}