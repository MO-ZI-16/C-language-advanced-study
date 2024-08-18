#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//柔性数组
//结构中的柔性数组成员前面必须至少一个其他成员
//sizeof返回的这种结构大小不包括柔性数组的内存


//第一种方案
typedef struct st_type
{
	int n;
	int arr[];//柔性数组成员
}type_a;
int main()
{
	int sz = sizeof(type_a);
	printf("%d\n", sz);//4

	//柔性数组的使用
	type_a* ps = (type_a*)malloc(sizeof(type_a) + 40);//"+40"的意思是arr内存
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//增加内存
	type_a* ptr = (type_a*)realloc(ps, sizeof(type_a) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	//...
	//释放
	free(ps);
	return 0;
}

//第二种方案
//为什么要对结构体malloc一次,因为要让结构体放在堆上,而第一种方案的柔性数组和int i原本就在堆上
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		//...
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//扩容
	int* ptr = (int*)realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	//使用
	
	//释放
	free(ps->arr);
	free(ps);
	ps = NULL;

	return 0;
}*/
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("8.17.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//...
	//读文件

	//关文件
	fclose(pf);
	pf = NULL;

	return 0;
}
