#include <stdio.h>

// int�� ���� n�� m�� ������ ��
// scanf �� ���� ����� �Է��� �ް�,
// �Է¹��� �� �����͸� �ǿ����ڷ� �Ͽ�
// ��Ģ���� �� ������ ������ ���� ��, ����� ����ϴ� ���α׷��� �ۼ�

// input
// N�� �Է����ּ���/
// 7
// M�� �Է����ּ���/
// 7

// output
// add : 14
// sub : 0
// mul : 49
// div : 1
// rem : 0
void main()
{
	//int a, b;

	//// ����ڿ��� �Է� ���̵�
	//printf("������ �Է����ּ���. \n");

	//// scanf �Է� ���
	//// ù��° �Ķ���� - �Է¹ް��� �ϴ� ������ Ÿ�Կ� �´� ���� ������
	//// �ι�° �Ķ���� - �Է¹��� �����͸� ���� ������ �ּ�
	//// & - ��ȣ �ڿ� ���� �ĺ����� �ּҸ� ��ȯ
	//scanf("%d", &a);

	//// ���������� �����͸� �Է¹޾Ҵ��� ����ؼ� Ȯ��
	//printf("�Է¹��� a�� ���� %d \n", a);

	int n, m;
	printf("n�� �Է����ּ���. \n");
	scanf("%d", &n);
	//printf("�Է¹��� n�� ���� %d \n", n);
	printf("m�� �Է����ּ���. \n");
	scanf("%d", &m);
	//printf("�Է¹��� m�� ���� %d \n", m);

	double add = n + m;
	double sub = n - m;
	double mul = n * m;
	double div = n / m;
	double rem = n % m;

	printf("add : %.2f \n", add);
	printf("sub : %.2f \n", sub);
	printf("mul : %.2f \n", mul);
	printf("div : %.2f \n", div);
	printf("rem : %.2f \n", rem);


	
}