#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//��������
//�ṹ�е����������Աǰ���������һ��������Ա
//sizeof���ص����ֽṹ��С����������������ڴ�


//��һ�ַ���
typedef struct st_type
{
	int n;
	int arr[];//���������Ա
}type_a;
int main()
{
	int sz = sizeof(type_a);
	printf("%d\n", sz);//4

	//���������ʹ��
	type_a* ps = (type_a*)malloc(sizeof(type_a) + 40);//"+40"����˼��arr�ڴ�
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�����ڴ�
	type_a* ptr = (type_a*)realloc(ps, sizeof(type_a) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	//...
	//�ͷ�
	free(ps);
	return 0;
}

//�ڶ��ַ���
//ΪʲôҪ�Խṹ��mallocһ��,��ΪҪ�ýṹ����ڶ���,����һ�ַ��������������int iԭ�����ڶ���
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		//...
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//����
	int* ptr = (int*)realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	//ʹ��
	
	//�ͷ�
	free(ps->arr);
	free(ps);
	ps = NULL;

	return 0;
}*/
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("8.17.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//...
	//���ļ�

	//���ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
