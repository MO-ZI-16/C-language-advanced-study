#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>



//第一个成员在与结构体变量偏移量为0的地址处。（即结构体的首地址处，即对齐到0处）
//其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//结构体的总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//对齐数 = 该结构体成员变量自身的大小与编译器默认的一个对齐数的较小值。
//内存对齐:以空间换时间

//在设计结构体时,既要满足对齐,又要节省空间,如何做:让占用空间小的成员尽量集中在一起
/*
struct S1
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char c1;//1
	char c2;//1
	int i;//4
};
struct S3
{
	char c1;//1
	char c2;//1
	int i;//4
};
struct S3
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	struct S1 s1;
	struct S2 s2;
	printf("%d\n", sizeof(double ));
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, c2));
	return 0;
}
*/

/*
//修改默认对齐数,使用#pragma 这个预处理指令
#pragma pack(4)
struct s
{
	int i;

	double d;
};
#pragma pack()
int main()
{
	printf("%d\n", sizeof(struct s));//12
	return 0;
}*/


//结构体传参时候的,尽量传地址
struct S
{
	int data[1000];
	int num;
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}
void print2(const struct S* ps)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("%d", ps->num);
}
int main()
{
	struct S s = { {1,2,3},100 };
	print1(s);//传值调用
	print2(&s);//传址调用
	return 0;
}