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
	//读文件

	//关文件
	fclose(pf);
	pf = NULL;

	return 0;
}
*/
/*
//写字符
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//写文件
	char i = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		fputc(i, pf);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}

//读字符
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	
	//读文件
	int ch = fgetc(pf);
	//printf("%c\n", ch);
	//printf("%c\n", ch);
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}

//写一行数据
int main()
{
	FILE* pf = fopen("test.txt", "a");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//写一行数据
	fputs(" hello bit\n", pf);
	fputs("hello bit\n", pf);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}


//写一行数据
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}

	//读一行数据
	char arr[20] = { 0 };
	fgets(arr, 20, pf);
	printf("%s\n", arr);

	//关闭文件
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

	//关闭文件
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


	//关闭文件
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
	//二进制的方式读
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
	//二进制的方式写
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

	//sprintf是把一个格式化的数据转化成字符串
	//把s中的格式化数据转化成字符串放到buf中
	sprintf(buf,"%s %d %f", s.arr, s.age, s.score);
	//"zhangsan 28 50 5f "
	printf("字符串:%s\n", buf); 

	//从字符串buf中获取一个格式化的数据到tmp中
	sscanf(buf,"%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("格式化:%s %d %f", tmp.arr, tmp.age, tmp.score);
	return 0;
}
*/

//读字符
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//读文件
	//定位文件指针
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
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}