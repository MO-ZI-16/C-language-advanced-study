#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//ö��
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

//enum Day��һ������
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
//����
//���ϵĳ�Ա�ǹ���һ���ڴ�ռ�,����һ��������Ĵ�С,����������Ա�Ĵ�С
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

//�жϵ�ǰ������Ĵ�С�˴洢

//1
int check_sys()
{
	int a = 1;
	return*(char*)&a;
}

//�������������жϴ�С��
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//����1��С��,����0�Ǵ��
	return u.c;
}

int main()
{
	int a = 1;//0x 00 00 00 01

	//��---->��
	//01 00 00 00 -- С��
	//00 00 00 01 -- ���
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
	return 0;
}
*/

//��������ڴ�ռ�����ڴ����,�ռ��С��4�ı���
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