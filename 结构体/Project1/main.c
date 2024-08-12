#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//结构体类型的定义
// 
//学生
struct Stu
{
	//学生的相关属性
	char name[20];
	int age;
}s1,s2;//s1和s2是struct Stu类型的变量
int main()
{
	struct Stu s3;//s3是局部变量
	return 0;
}
*/

/*
//匿名结构体类型
//只能使用一次
struct 
{
	//学生的相关属性
	char name[20];
	int age;
}s1;


struct
{
	int a;
	char b;
	float c;
}x;

struct
{
	int a;
	char b;
	float c;
}a[20], * p;


int main()
{
	p = &x;
	return 0;
}
*/
/*
//数据结构
//数据在内存中的存储结构
//线性
//顺序表

struct Node
{
	int date;
	struct Node next;

};

int main()
{
	sizeof(struct Node);//
	return 0;
}

struct Node
{
	int data;
	struct Node* next;
};

//1
typedef struct Node
{
	int data;
	struct Node* next;
}* linklist;
//typedf-->重命名
//这里就是即定义struct Node,同时对struct Node*重命名为linklist

//2
struct Node
{
	int data;
	struct Node* next;
};
typedef struct Node* linklist;
//先产生这个类型,对这个类型加指针再重命名为linklist.
*/

/*
//结构体变量的定义和初始化
struct Point
{
	int x;
	int i;

}p1 = { 2,3 };			//声明类型的同时定义变量p1
struct Point p2;//定义结构体变量p2

struct score
{
	int n;
	char ch;
};

struct Stu
{
	char name[20];
	int age;
	struct score s;
};
int main()
{
	struct Point p2 = { 3,4 };//定义结构体变量p2
	struct Stu s1 = { "zhangsan",20,{100,'q'} };//结构体的初始化
	printf("%s %d %d %c\n", s1.name,s1.age, s1.s.n, s1.s.ch);
	return 0;
}
*/
