#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include< stdlib.h > 
#include<search.h>
/*
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int main()
{
	//函数指针数组
	int(*pfarr[])(int, int) = { 0,add,sub,mul };

	//指向 函数指针数组 的指针
	int(*(*ppfarr)[])(int, int) = { 0,add,sub,mul };
	ppfarr = &pfarr;
	return 0;
}
*/
//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，
// 我们就说这是回调函数。
// 回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。
// 
//冒泡排序
/*
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		int flag = 1;//假设数组是有序的,是排好序的
		//一趟冒泡排序的过程
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}*/


/*
//比较两个整形数据
//e1指向一个整数
//e2
int com_int (const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 2,5,1,78,85,67,43,455,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), com_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//测试使用qsort来排序结构体数据
struct stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{

	return(((struct stu*)e1)->name - ((struct stu*)e2)->name);

}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//strmp函数返回的数字 --> >0,==0,<0
	strcmp(((struct stu*)e1)->age, ((struct stu*)e2)->age);
	//(struct stu*)e1被强制类型转换成结构体指针
}
void test2()
{
	//测试使用qsort来排序结构体数据
	struct stu s[] = { {"zhangsan",15},{"lisi",25} ,{"wangwu",2} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}
int main()
{
	test1();
	test2();
	return 0;
}
*/
//
//qsort - 这个函数可以排序任意类型的数据
//__cdecl 函数调用约定
//void qsort(void* base,//你要排序的数据的起始位置
//			size_t num, //待排序的数据元素的个数
//			size_t width, //待排序的数据元素的大小(单位是字节)
//			int(* compare)(const void* elem1, const void* elem2 )//函数指针
//			);

/*
int main()
{
	int a = 10;
	char* pa = &a;//int*,报错

	void* pv = &a;//void* 是无具体类型的指针,可以接受任意类型的地址
	//void* 是无具体类型的指针,所以不能解引用操作,所以不能+-整数

	return 0;
}*/

//冒泡排序
//使用自己写的qsort函数
int com_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char*buf1,char*buf2,int width)
{

	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(* comp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		int flag = 1;//假设数组是有序的,是排好序的
		//一趟冒泡排序的过程
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if (comp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test3()
{
	int arr[] = { 2,5,1,78,85,67,43,455,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	int i = 0;
	bubble_sort(arr, sz, sizeof(arr[0]), com_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}

