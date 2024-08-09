#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//C语言的库函数,在执行失败的时候,都会设置错误码
//0 1 2 3 4 5 6 7 8 9 10

/*
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(5));
	//printf("%s\n", strerror(5));

	//errno - C语言设置的一个全局的错误码存放的变量

	FILE* PF = fopen("8.8.txt", "r");
	if (PF == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	else
	{
		//
	}
	return 0;
}*/

/*
//字符分类函数
//isspace
#include<ctype.h>
int main()
{
	//int a = isspace(' ');
	//printf("%d\n", a);

	//int a = isdigit('7');
	//printf("%d\n", a);

	//printf("%c\n", tolower('&'));
	return 0;
}
*/
/*
#include <assert.h>
#include <string.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy负责拷贝两块独立空间中的数据
// 重叠内存的拷贝,是怎么做的? memmove
//内存拷贝
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 32);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	//printf("%d\n", arr[i]);
	//float arr3[5] = { 1.0,2.0,3.0,4.0,5.0 };
	//float arr4[10] = { 0.0 };
	//memcpy ( arr4,arr3,20 );
	return 0;

}
*/
void* my_memmove(void* dest, const void* sour, size_t num)
{
	///////

}
void test1()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8 };
	memcpy(arr1+2, arr1, 32);

	//memmove(arr1 + 2, arr1, 32);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	//printf("%d\n", arr[i]);
	//float arr3[5] = { 1.0,2.0,3.0,4.0,5.0 };
	//float arr4[10] = { 0.0 };
	//memcpy ( arr4,arr3,20 );
	return 0;
}
int main()
{
	test1();
	return 0;
}