#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define S
//
//
//int main()
//{
//	//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf("file:%s line=%d date:%s time%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}
/*
#define DOUBLE(x) (x)*(x)
#define de "afd"
#define Add(class,Num) class##Num
int main()
{
	int r = DOUBLE(5+9);
	int class106 = 100;
	printf("%d\n", Add(class, 106));
	printf("%d", r);
	printf(de);
	return 0;
}

#define Max(a,b) ((a)>(b)?(a):(b))
int main()
{
	int a = 5;
	int b = 4;
	int m = MAX(a++, b++);
  //int m = ((a) > (b) ? (a) : (b));
	        //5  >  4     6    因为此时b已经没有机会执行++了,所以此时b为5
	printf("m=%d", m);
	             //6
	printf("a=%d b=%d", a, b);
	                 // 7  5
	return 0;
}

#define M 100
int main()
{
	printf("%d\n", M);
#undef M
	printf("%d\n", M);
	return 0;
}

#define M 6
int main()
{
#if M<5
	printf("hehe\n");
#elif M==5
	printf("he");
#else
	printf("h\n");
#endif

	return 0;
}
*/

//
#include <stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};
#define OFFSETOF(type,m_name)  (int)&(((type*)0)->m_name)
                                     //struct S*
int main()
{
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c1));
	
	printf("%d\n", OFFSETOF(struct S, c2));
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i)); 
	//printf("%d\n", offsetof(struct S, c2));

	return 0;
}