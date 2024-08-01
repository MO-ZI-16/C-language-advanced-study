#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	//指针数组
	int* arr[4];
	char* ch[5];
	int** p = arr;
	//数组指针
	int arr2[5];
	int(*pa)[5] = &arr2;

	char* arr3[6];
	char* (*p3)[6] = &arr3;

	return 0;
}
*/

/*
int test(const char* str)
{
	printf("test\n");
	return 0;
}
int main()
{
	//函数指针 - 也是一种指针,指向函数的指针
	//printf("%p\n", test);
	//printf("%p\n", &test);
	int(*pf)(const char*) = test;
	(*pf)("avsd");

	//pf和test
	test("af");
	pf("asfd");
	return 0;
}
*/

/*
int main()
{
	(*( void(*)() )0)();
	return 0;
}
//void(*p)();
//p是函数指针
// 
//void(*)(); 函数指针类型
//(void(*)())0;是对0(int)进行强制类型转换成 -> 函数指针类型
// 
//那么此时0就是一个函数的地址, 就像是0x0012ff32(十六进制,表示一个整数) 
// -> (char*)0x0012ff32 就被强制类型转换成字符指针,也就是字符的地址
// 
//以上是一次函数调用,调用的是0作为地址处的函数
//1.把0强制类型转换为:无参,返回类型是void的函数的地址
//2.调用0地址处的这个函数
*/

/*
//typedef unsigned int uint; typedef可以对类型重命名,这里对unsigned int类型重命名为uint
typedef void(*pf_t)(int);//把void(*)(int)类型重命名为pf_t
int main()
{
	void ( *signal( int, void(*)(int) ) )(int);
	pf_t signal(int, pf_t);
	return 0;
}
//void(*)(int)是一个函数指针类型
//signal是函数名,以上代码是一次函数声明
//声明的signal函数的第一个参数的类型是int,第二个参数的类型是函数指针,该函数指针指向的函数参数是int,
//返回类型是void,signal函数的返回类型也是一个函数指针,该函数指针指向的函数参数是int,返回类型是void,
*/

/*
//函数指针用途
// 
//写一个计算器
void menu()
{
	printf("***********************************\n");
	printf("*****  1.add   2.sub  *************\n");
	printf("*****  3.mul   4.div  *************\n");
	printf("*****  0.exit         *************\n");
}
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
int div(int x, int y)
{
	return x / y;
}

void calc(int(*pt)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入2个操作数:>");
	scanf("%d %d", &x, &y);
	ret = pt(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("退出计算器");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while(input);
	return 0;
}
*/


//函数指针数组
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
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int(*pf)(int, int) = add;//pf是函数指针
	int(*arr[4])(int, int) = { add, sub,mul,div };//arr是函数指针的数组
	for (int i = 0; i < 4; i++)
	{
		int ret = 0;
		ret = arr[i](2, 3);
		printf("%d\n", ret);
	}
}