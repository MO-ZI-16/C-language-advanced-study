#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	*p = 20;
	free(p);
	p = NULL;

	return 0;
}



//2.对动态开辟空间越界访问

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		p[i] = i;
	}
	free(p);
	p = NULL;

	return 0;
}


//3.对非动态开辟空间使用free
int main()
{
	int a = 10;
	int* p = &a;


	free(p);
	p = NULL;
	return 0;
}


//4.使用free释放一块动态开辟内存的一部分
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}

	//使用
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}

	//释放
	free(p);
	p = NULL;

	return 0;
}

//5.对同一块动态内存多次释放
int main()
{
	int* p = (int*)malloc(40);
	//
	free(p);
	//
	free(p);

	return 0;
}
//6.动态开辟内存忘记释放(内存泄漏)
void test()
{
	int* p = (int*)malloc(100);

	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
		return;
	free(p);
	p = NULL;
}
int main()
{
	test();
	return 0;
}


test()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return p;
	}
	//
	return p;
}
int main()
{
	int* ret = test();
	//忘记释放了
	return 0;
}
*/
/*
//初始版本
void GetMemory(char* p)
{
	p = (char*)malloc(100);//内存泄露
}
void test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello word");//str是NULL,解引用会崩溃
	printf(str);
}
int main()
{
	test();
	return 0;
}

//改进1
void GetMemory(char** p)
{
	*p = (char*)malloc(100);//内存泄露
}
void test(void)
{
	char* str = NULL;
	GetMemory(&str);
	//str存放的就是动态开辟的100字节的地址
	strcpy(str, "hello word");
	printf(str);
	free(str);
	str = NULL;

}
int main()
{
	test();
	return 0;
}


//改进2
char* GetMemory()
{
	char* p = (char*)malloc(100);//内存泄露
	return p;
}

void test(void)
{
	char* str = NULL;
	str = GetMemory();
	//str存放的就是动态开辟的100字节的地址
	strcpy(str, "hello word");
	printf(str);
	free(str);
	str = NULL;

}
int main()
{
	test();
	return 0;
}
*/
/*
int main()
{
	printf("hello word\n");
	char* p = "hello word\n";//这里把h的地址赋给p

	printf(p);

	return 0;

}*/

/*
int* test()
{
	//返回栈区空间的地址
	//栈区空间地址随时被销毁,非常危险
	//出了这个函数,这个空间地址就被销毁了

	int a = 10;
	return &a;
}
int main()
{
	int* p = test;
	printf("%d\n", *p);
}*/
/*
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);

	if (str != NULL)
	{
		strcpy(str, "world"); //str是野指针
		printf(str);
	}
}

int main()
{
	int n = 0;
	int m = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		long i = n;
		long j = m;
		long r = 0;
		while (r = i % j)
		{
			i = j;
			j = r;
		}
		//j就是最大公约数
		//m * n / j 就是最小公倍数
		printf("%d\n", m * n / j + j);
		
		//int min = n < m ? n : m;
		//int max = n > m ? n : m;
		//int i = min;
		//int j = max;
		//while (1)
		//{
		//	if (n % i == 0 && m % i == 0)
		//	{
		//		break;
		//	}
		//	i--;
		//}
		////i就是最大公约数
		//while (1)
		//{
		//	if (j % n == 0 && j % m == 0)
		//	{
		//		break;
		//	}
		//	j++;
		//}
		////j就是最小公倍数
		//printf("%d\n", i + j);
		
	}
	return 0;
}
*/
int main()
{

	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}