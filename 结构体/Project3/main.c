#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//λ�� :��ʡ�ռ��
//1. λ�εĳ�Ա������ int unsigned int signed int ������ char ���������μ��壩���͡�
//2. λ�εĿռ����ǰ�����Ҫ�� 4 ���ֽڣ� int ������ 1 ���ֽڣ� char ���ķ�ʽ�����ٵġ�
//3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
struct A
{
	int _a : 2; //����2������λ
	int _b : 5;//5������λ
	int _c : 10;//10��bite
	int _d : 30;//30��bite
};
//47��bite
// 6byte - 48bite
// 8byte - 64bite
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
*/
//λ��
struct S
{
	char a : 3; 
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}