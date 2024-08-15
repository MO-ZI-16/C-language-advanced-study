#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//枚举
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

//enum Day是一个类型
int main()
{
	enum Day d = Fri;
	printf("%d\n", Mon);//0
	printf("%d\n", Tues);//1
	printf("%d\n", Wed);//2
	printf("%d\n", d);//4
	printf("%d\n", Fri);//4
	printf("%c\n", Mon);
	return 0;
}



enum Day
{
	Mon=1,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
int main()
{
	enum Day d = Fri;
	printf("%d\n", Mon);//1
	printf("%d\n", Tues);//2
	printf("%d\n", Wed);//3
	printf("%d\n", d);//5
	printf("%d\n", Fri);//5
	printf("%c\n", Mon);//1
	return 0;
}
*/
/*
//联合
//联合的成员是共用一块内存空间,这样一个联合体的大小,至少是最大成员的大小
union Un
{
	int a;
	char c;
};

struct St
{
	int a;
	char c;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.a));
	printf("%p\n", &(u.c));

	u.a = 0x11223344;
	u.c = 0x00;
	return 0;
}

//判断当前计算机的大小端存储

//1
int check_sys()
{
	int a = 1;
	return*(char*)&a;
}

//利用联合体来判断大小端
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1是小端,返回0是大端
	return u.c;
}

int main()
{
	int a = 1;//0x 00 00 00 01

	//低---->高
	//01 00 00 00 -- 小端
	//00 00 00 01 -- 大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}
*/

//联合体的内存空间存在内存对齐,空间大小是4的倍数
union Un
{
	char arr[5];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}