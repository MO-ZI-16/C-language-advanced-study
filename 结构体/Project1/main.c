#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//�ṹ�����͵Ķ���
// 
//ѧ��
struct Stu
{
	//ѧ�����������
	char name[20];
	int age;
}s1,s2;//s1��s2��struct Stu���͵ı���
int main()
{
	struct Stu s3;//s3�Ǿֲ�����
	return 0;
}
*/

/*
//�����ṹ������
//ֻ��ʹ��һ��
struct 
{
	//ѧ�����������
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
//���ݽṹ
//�������ڴ��еĴ洢�ṹ
//����
//˳���

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
//typedf-->������
//������Ǽ�����struct Node,ͬʱ��struct Node*������Ϊlinklist

//2
struct Node
{
	int data;
	struct Node* next;
};
typedef struct Node* linklist;
//�Ȳ����������,��������ͼ�ָ����������Ϊlinklist.
*/

/*
//�ṹ������Ķ���ͳ�ʼ��
struct Point
{
	int x;
	int i;

}p1 = { 2,3 };			//�������͵�ͬʱ�������p1
struct Point p2;//����ṹ�����p2

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
	struct Point p2 = { 3,4 };//����ṹ�����p2
	struct Stu s1 = { "zhangsan",20,{100,'q'} };//�ṹ��ĳ�ʼ��
	printf("%s %d %d %c\n", s1.name,s1.age, s1.s.n, s1.s.ch);
	return 0;
}
*/
