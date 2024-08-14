#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//位段 :节省空间的
//1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型。
//2. 位段的空间上是按照需要以 4 个字节（ int ）或者 1 个字节（ char ）的方式来开辟的。
//3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
struct A
{
	int _a : 2; //代表2个比特位
	int _b : 5;//5个比特位
	int _c : 10;//10个bite
	int _d : 30;//30个bite
};
//47个bite
// 6byte - 48bite
// 8byte - 64bite
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
*/
//位段
struct S
{
	char a : 3; 
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}