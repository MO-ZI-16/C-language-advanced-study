#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>



//��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ���������ṹ����׵�ַ���������뵽0����
//������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//�ṹ����ܴ�СΪ����������ÿ����Ա��������һ��������������������
//���Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
//������ = �ýṹ���Ա��������Ĵ�С�������Ĭ�ϵ�һ���������Ľ�Сֵ��
//�ڴ����:�Կռ任ʱ��

//����ƽṹ��ʱ,��Ҫ�������,��Ҫ��ʡ�ռ�,�����:��ռ�ÿռ�С�ĳ�Ա����������һ��
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
//�޸�Ĭ�϶�����,ʹ��#pragma ���Ԥ����ָ��
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


//�ṹ�崫��ʱ���,��������ַ
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
	print1(s);//��ֵ����
	print2(&s);//��ַ����
	return 0;
}