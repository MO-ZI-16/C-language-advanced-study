#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	//ָ������
	int* arr[4];
	char* ch[5];
	int** p = arr;
	//����ָ��
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
	//����ָ�� - Ҳ��һ��ָ��,ָ������ָ��
	//printf("%p\n", test);
	//printf("%p\n", &test);
	int(*pf)(const char*) = test;
	(*pf)("avsd");

	//pf��test
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
//p�Ǻ���ָ��
// 
//void(*)(); ����ָ������
//(void(*)())0;�Ƕ�0(int)����ǿ������ת���� -> ����ָ������
// 
//��ô��ʱ0����һ�������ĵ�ַ, ������0x0012ff32(ʮ������,��ʾһ������) 
// -> (char*)0x0012ff32 �ͱ�ǿ������ת�����ַ�ָ��,Ҳ�����ַ��ĵ�ַ
// 
//������һ�κ�������,���õ���0��Ϊ��ַ���ĺ���
//1.��0ǿ������ת��Ϊ:�޲�,����������void�ĺ����ĵ�ַ
//2.����0��ַ�����������
*/

/*
//typedef unsigned int uint; typedef���Զ�����������,�����unsigned int����������Ϊuint
typedef void(*pf_t)(int);//��void(*)(int)����������Ϊpf_t
int main()
{
	void ( *signal( int, void(*)(int) ) )(int);
	pf_t signal(int, pf_t);
	return 0;
}
//void(*)(int)��һ������ָ������
//signal�Ǻ�����,���ϴ�����һ�κ�������
//������signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��,�ú���ָ��ָ��ĺ���������int,
//����������void,signal�����ķ�������Ҳ��һ������ָ��,�ú���ָ��ָ��ĺ���������int,����������void,
*/

/*
//����ָ����;
// 
//дһ��������
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
	printf("������2��������:>");
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
		printf("��ѡ��:>");
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
			printf("�˳�������");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while(input);
	return 0;
}
*/


//����ָ������
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
	int(*pf)(int, int) = add;//pf�Ǻ���ָ��
	int(*arr[4])(int, int) = { add, sub,mul,div };//arr�Ǻ���ָ�������
	for (int i = 0; i < 4; i++)
	{
		int ret = 0;
		ret = arr[i](2, 3);
		printf("%d\n", ret);
	}
}