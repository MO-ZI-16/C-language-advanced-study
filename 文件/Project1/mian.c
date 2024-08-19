#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
/*
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
*/
/*
//д�ַ�
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//д�ļ�
	char i = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		fputc(i, pf);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}

//���ַ�
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	
	//���ļ�
	int ch = fgetc(pf);
	//printf("%c\n", ch);
	//printf("%c\n", ch);
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}

//дһ������
int main()
{
	FILE* pf = fopen("test.txt", "a");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//дһ������
	fputs(" hello bit\n", pf);
	fputs("hello bit\n", pf);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}


//дһ������
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}

	//��һ������
	char arr[20] = { 0 };
	fgets(arr, 20, pf);
	printf("%s\n", arr);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
*/
/*
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	FILE* pf = fopen("test.txt", 'r');
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}
	//
	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	printf("%s %d %f\n", s.arr, s.age, s.score);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	
	return 0;
}


int main()
{
	struct S s = { "zhangsan",28,50.5f };
	FILE* pf = fopen("test.txt", 'w');
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}
	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	//
	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);


	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}

struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan",28,50.5f };
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}
	//�����Ƶķ�ʽ��
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f", s.arr, s.age, s.score);
	//

	fclose(pf);
	pf = NULL;
	return 0;
}

int main()
{
	struct S s = { "zhangsan",28,50.5f };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}
	//�����Ƶķ�ʽд
	fwrite(&s, sizeof(struct S), 1, pf);
	//

	fclose(pf);
	pf = NULL;
	return 0;
}
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan",28,50.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };

	//sprintf�ǰ�һ����ʽ��������ת�����ַ���
	//��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
	sprintf(buf,"%s %d %f", s.arr, s.age, s.score);
	//"zhangsan 28 50 5f "
	printf("�ַ���:%s\n", buf); 

	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf,"%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("��ʽ��:%s %d %f", tmp.arr, tmp.age, tmp.score);
	return 0;
}
*/

//���ַ�
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//���ļ�
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

;	fseek(pf, -1, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}