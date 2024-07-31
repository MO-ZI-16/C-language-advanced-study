#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1.指针就是个变量,用来存放地址,地址是唯一标识一块内存空间
//2.指针的大小是固定的4/8个字节(32位平台/64位平台)
//3.指针是有类型的,指针的类型决定了指针的+-整数的步长,指针解引用操作的时候的权限
//4.

/*
int main()
{
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'b';
	//printf("%c\n", ch);

	char* p = "abcdef";//把字符串首字符a的地址,赋值 给了p.常量字符串不能改
	//char arr[] = "abcdef";
	//*p = 'w';
	char ch  = 'w';
	p = &ch;
	printf("%s\n", p);
	return 0;
}
*/


//int arr[10];整形数组
//char ch[5];//字符数组
// 
//指针数组-是数组,用来存放指针的数组
//int *arr2[6];存放整形指针的数组  int* int* int* int*
//char *arr3[6];存放字符指针的数组 char* char* char*
/*
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
	{
		printf("p1==p2\n");
	}
	else
		printf("p1!=p2\n");
	if (arr1 == arr2)
	{
		printf("arr1==arr2\n");
	}
	else
		printf("arr1!=arr2\n");
	return 0;
}*/

/*
int main()
{
	int arr1[] = { 1,2,3,56,3 };
	int arr2[] = { 1,2,34,56,3 };
	int arr3[] = { 1,32,34,56,3 };

	int* parr[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//*(p+i) --> p[i]
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}

//int *p1[10];p1是指针数组,用来存放指针的数组
//int(*p2)[10];p2是数组指针,p2可以指向一个数组,该数组有10个元素,每个元素是int类型

//数组指针 - 指针 - 指向数组的指针
// 
//整形指针 - 指向整形的指针 -> int*
//字符指针 - 指向字符的指针 -> char*
*/
/*
//数组名
int main()
{
	int arr[10] = { 0 };

	//数组名就是首元素地址
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	int sz = sizeof(arr);
	printf("%d\n", sz);
	return 0;
}
//数组名通常就是首元素地址
//但是有两个意外
//1.sizeof(数组名),这里的数组名表示整个数组,计算的是整个数组的大小,单位是字节
//2.&数组名,这里的数组名表示的依然是整个数组,所以&数组名取出的是整个数组的地址
//

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//有警告产生
	int(*p2)[10] = &arr;	//数组指针是用来存放数组的地址

	//整形指针是用来存放整形的地址
	//字符指针是用来存放字符的地址
	//数组指针是用来存放数组的地址

	return 0;
}

int main()
{
	char* arr[5] = { 0 };
	char* (*pc)[5] = &arr;
	//二级指针
	char ch = 'w';
	char* p1 = &ch;
	char** p2 = &p1;
	return 0;
}

int main()
{

	int arr[] = { 1,2,3,4,5,6 };
	
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	


	//数组指针存放数组的地址
	int(*p)[] = &arr;//报警告
	int (*p)[10] = &arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(*p + i));//p是指向数组的,*p其实就相当于数组名,数组名又是数组首元素的地址
		//所以*p本质是数组首元素地址
	}
	return 0;
}
*/

/*
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//int (*p)[5]
//p的类型是:int(*)[5]
//p是指向一个整形数组,数组5个元素-int[5]
//p+1 -> 跳过一个5个元素的数组


//arr数组名,表示数组首元素的地址,二维数组的首元素就是他的第一行
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,34,67,9043,34,43,56 };
	print2(arr, 3, 5);
	return 0;
}

//int arr[5];arr是整形数组
//int *parr1[5];parr1是整形指针数组,存放指针的数组
//int(*parr2)[10];parr2是数组指针
//int(*parr3[10])[5];parr3是存放数组指针的数组
*/

/*
//一维数组传参
void test(int arr[])//ok
{}
void test(int arr[10])
{}
void test(int *arr)
{}

void test2(int* arr[20])
{}
void test2(int **arr[])
{}

int main()
{
	int arr[10] = { 0 };
	int* arr2[10] = { 0 };//指针数组

	test(arr);
	test2(arr2);

	return 0;
}


//二维数组传参
void test(int arr[2][5])//ok
{}
void test(int arr[][])//不ok,行可以省略,列不能省略
{}
void test(int arr[][5])//ok,行可以省略,列不能省略
{}

void test(int *arr)//NO
{}
void test(int* arr[5])//NO,指针数组
{}
void test(int(*arr)[5])//OK,arr是指针,指向的数组是五个元素-每个元素是整形
{}
void test(int** arr)//NO
{}

int main()
{
	int arr[2][5] = { 0 };
	test(arr);
}
*/
/*
//一级指针传参
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,89,8,34 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//一级指针p,传给函数
	print(p, sz);
	return 0;
}

//如果是函数的参数部分是指针
void print1(int* p)
{}
int main()
{
	int v = 10;
	int* ptr = &v;
	int arr[10];

	print1(&v);
	print1(ptr);
	print1(arr);
	return 0;
}


//二级指针传参
void test(int** ptr)
{
	printf("num=%d\n", **ptr);
}
int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);
	test(&p);
	return 0;
}


//如果是函数的形式参数部分是二级指针,调用函数时传什么参数
void test(int** ptr)
{}
int main()
{
	int* p1;
	int** p2;
	int* arr[10];//指针变量

	test(&p1);
	test(p2);
	test(arr);//首元素地址,int*的地址
	return 0;
}
*/

/*
//函数指针,数组指针
int add(int aa, int a)
{
	return aa + a;
}
int main()
{
	int arr[5] = { 0 };
	//&数组名,取出的是数组的地址
	int(*p)[5] = &arr;//数组指针

	//**
	//&函数名,取出的是函数的地址
	printf("%p\n", &add);
	printf("%p\n", add);
	//对于函数来说,&函数名和函数名都是函数的地址

	int(*pf)(int, int) = &add;
	int(*pf)(int, int) = add;

	int ret = pf(2, 3);
	int ret = (*pf)(2, 3);//通过函数的地址来传参
	printf("%d\n", ret);

	return 0;
}


//函数指针的调用
int add(int aa, int a)
{
	return aa + a;
}
void calc(int(*pt)(int,int))
{
	int a = 3;
	int b = 5;
	int ret = pt(a, b);
	printf("%d\n", ret);
}
int main()
{
	calc(add);
	return 0;
}
*/