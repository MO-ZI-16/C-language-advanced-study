#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int a = 10;//4���ֽ�
	int arr[10];//40���ֽ�

	return 0;
}
*/

//��̬�ڴ����
//����:malloc,free,calloc,realloc
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//
//�䳤����(c99��׼��֧��)
//int n = 0;
//scanf("%d", &n);
//int arr[n]

/*
int main()
{
	int arr[10] = { 0 };
	int* p =(int *) malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}

	free(p);
	p = NULL;
	//û��free
	//������˵�ڴ�ռ�Ͳ��������
	//�������˳���ʱ��,ϵͳ���Զ������ڴ�ռ�

	return 0;
}

int main()
{
	return 0;
	int a = 10;
	int* p = &a;

	//����޷��ͷſռ�,�ᱨ��,��Ϊint a = 10��ջ��,��free�ͷŶ����ռ�
	free(p);
	p = NULL;
	return 0;
}
*/

/*
//����10�����εĿռ�
//calloc����
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//��ӡ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
*/

//realloc ��������
int main()
{
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//����
	int* ptr = (int *)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;
	return 0;
}