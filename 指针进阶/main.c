#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1.ָ����Ǹ�����,������ŵ�ַ,��ַ��Ψһ��ʶһ���ڴ�ռ�
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽ�(32λƽ̨/64λƽ̨)
//3.ָ���������͵�,ָ������;�����ָ���+-�����Ĳ���,ָ������ò�����ʱ���Ȩ��
//4.

/*
int main()
{
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'b';
	//printf("%c\n", ch);

	char* p = "abcdef";//���ַ������ַ�a�ĵ�ַ,��ֵ ����p.�����ַ������ܸ�
	//char arr[] = "abcdef";
	//*p = 'w';
	char ch  = 'w';
	p = &ch;
	printf("%s\n", p);
	return 0;
}
*/


//int arr[10];��������
//char ch[5];//�ַ�����
// 
//ָ������-������,�������ָ�������
//int *arr2[6];�������ָ�������  int* int* int* int*
//char *arr3[6];����ַ�ָ������� char* char* char*
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

//int *p1[10];p1��ָ������,�������ָ�������
//int(*p2)[10];p2������ָ��,p2����ָ��һ������,��������10��Ԫ��,ÿ��Ԫ����int����

//����ָ�� - ָ�� - ָ�������ָ��
// 
//����ָ�� - ָ�����ε�ָ�� -> int*
//�ַ�ָ�� - ָ���ַ���ָ�� -> char*
*/
/*
//������
int main()
{
	int arr[10] = { 0 };

	//������������Ԫ�ص�ַ
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
//������ͨ��������Ԫ�ص�ַ
//��������������
//1.sizeof(������),�������������ʾ��������,���������������Ĵ�С,��λ���ֽ�
//2.&������,�������������ʾ����Ȼ����������,����&������ȡ��������������ĵ�ַ
//

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//�о������
	int(*p2)[10] = &arr;	//����ָ���������������ĵ�ַ

	//����ָ��������������εĵ�ַ
	//�ַ�ָ������������ַ��ĵ�ַ
	//����ָ���������������ĵ�ַ

	return 0;
}

int main()
{
	char* arr[5] = { 0 };
	char* (*pc)[5] = &arr;
	//����ָ��
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
	


	//����ָ��������ĵ�ַ
	int(*p)[] = &arr;//������
	int (*p)[10] = &arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(*p + i));//p��ָ�������,*p��ʵ���൱��������,����������������Ԫ�صĵ�ַ
		//����*p������������Ԫ�ص�ַ
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
//p��������:int(*)[5]
//p��ָ��һ����������,����5��Ԫ��-int[5]
//p+1 -> ����һ��5��Ԫ�ص�����


//arr������,��ʾ������Ԫ�صĵ�ַ,��ά�������Ԫ�ؾ������ĵ�һ��
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

//int arr[5];arr����������
//int *parr1[5];parr1������ָ������,���ָ�������
//int(*parr2)[10];parr2������ָ��
//int(*parr3[10])[5];parr3�Ǵ������ָ�������
*/

/*
//һά���鴫��
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
	int* arr2[10] = { 0 };//ָ������

	test(arr);
	test2(arr2);

	return 0;
}


//��ά���鴫��
void test(int arr[2][5])//ok
{}
void test(int arr[][])//��ok,�п���ʡ��,�в���ʡ��
{}
void test(int arr[][5])//ok,�п���ʡ��,�в���ʡ��
{}

void test(int *arr)//NO
{}
void test(int* arr[5])//NO,ָ������
{}
void test(int(*arr)[5])//OK,arr��ָ��,ָ������������Ԫ��-ÿ��Ԫ��������
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
//һ��ָ�봫��
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
	//һ��ָ��p,��������
	print(p, sz);
	return 0;
}

//����Ǻ����Ĳ���������ָ��
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


//����ָ�봫��
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


//����Ǻ�������ʽ���������Ƕ���ָ��,���ú���ʱ��ʲô����
void test(int** ptr)
{}
int main()
{
	int* p1;
	int** p2;
	int* arr[10];//ָ�����

	test(&p1);
	test(p2);
	test(arr);//��Ԫ�ص�ַ,int*�ĵ�ַ
	return 0;
}
*/

/*
//����ָ��,����ָ��
int add(int aa, int a)
{
	return aa + a;
}
int main()
{
	int arr[5] = { 0 };
	//&������,ȡ����������ĵ�ַ
	int(*p)[5] = &arr;//����ָ��

	//**
	//&������,ȡ�����Ǻ����ĵ�ַ
	printf("%p\n", &add);
	printf("%p\n", add);
	//���ں�����˵,&�������ͺ��������Ǻ����ĵ�ַ

	int(*pf)(int, int) = &add;
	int(*pf)(int, int) = add;

	int ret = pf(2, 3);
	int ret = (*pf)(2, 3);//ͨ�������ĵ�ַ������
	printf("%d\n", ret);

	return 0;
}


//����ָ��ĵ���
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