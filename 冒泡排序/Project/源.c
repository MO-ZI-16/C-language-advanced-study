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
	//����ָ������
	int(*pfarr[])(int, int) = { 0,add,sub,mul };

	//ָ�� ����ָ������ ��ָ��
	int(*(*ppfarr)[])(int, int) = { 0,add,sub,mul };
	ppfarr = &pfarr;
	return 0;
}
*/
//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ��
// ���Ǿ�˵���ǻص�������
// �ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��
// 
//ð������
/*
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz; i++)
	{
		int flag = 1;//���������������,���ź����
		//һ��ð������Ĺ���
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
//�Ƚ�������������
//e1ָ��һ������
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

//����ʹ��qsort������ṹ������
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
	//strmp�������ص����� --> >0,==0,<0
	strcmp(((struct stu*)e1)->age, ((struct stu*)e2)->age);
	//(struct stu*)e1��ǿ������ת���ɽṹ��ָ��
}
void test2()
{
	//����ʹ��qsort������ṹ������
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
//qsort - ����������������������͵�����
//__cdecl ��������Լ��
//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//			size_t num, //�����������Ԫ�صĸ���
//			size_t width, //�����������Ԫ�صĴ�С(��λ���ֽ�)
//			int(* compare)(const void* elem1, const void* elem2 )//����ָ��
//			);

/*
int main()
{
	int a = 10;
	char* pa = &a;//int*,����

	void* pv = &a;//void* ���޾������͵�ָ��,���Խ����������͵ĵ�ַ
	//void* ���޾������͵�ָ��,���Բ��ܽ����ò���,���Բ���+-����

	return 0;
}*/

//ð������
//ʹ���Լ�д��qsort����
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
	//����
	for (i = 0; i < sz; i++)
	{
		int flag = 1;//���������������,���ź����
		//һ��ð������Ĺ���
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if (comp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
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

