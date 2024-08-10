#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//前-->后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	if (dest > src)
	{
		//后-->前
		while (num--)
		{
			*((char*)dest+num)=*((char*)src + num);
		}
	}
	return ret;
}
void test1()
{
	int arr1[20] = { 1,2,3,4,5,6,7,8 ,9,10 };
	//memcpy(arr1 + 2, arr1, 32);

	my_memmove(arr1 , arr1+2, 20);
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

//memcmp
void test2()
{

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,3,2 };
	int ret = memcmp(arr1, arr2, 12);//-1
	printf("%d\n", ret);
}

//memset
void test3()
{
	//char arr[] = "hello bit";
	//memset(arr, 'x', 5);

	//把arr初始化为全1,做不到,因为这是以单个字节来操作的
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	////printf("%s\n", arr);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}