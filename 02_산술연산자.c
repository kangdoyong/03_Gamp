#include <stdio.h>

// int형 변수 n과 m을 선언한 후
// scanf 를 통해 사용자 입력을 받고,
// 입력받은 두 데이터를 피연산자로 하여
// 사칙연산 및 나머지 연산을 수행 후, 결과를 출력하는 프로그램을 작성

// input
// N을 입력해주세요/
// 7
// M을 입력해주세요/
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

	//// 사용자에게 입력 가이드
	//printf("정수를 입력해주세요. \n");

	//// scanf 입력 기능
	//// 첫번째 파라미터 - 입력받고자 하는 데이터 타입에 맞는 형식 지정자
	//// 두번째 파라미터 - 입력받은 데이터를 담을 변수의 주소
	//// & - 기호 뒤에 오는 식별자의 주소를 반환
	//scanf("%d", &a);

	//// 정상적으로 데이터를 입력받았는지 출력해서 확인
	//printf("입력받은 a의 값은 %d \n", a);

	int n, m;
	printf("n을 입력해주세요. \n");
	scanf("%d", &n);
	//printf("입력받은 n의 값은 %d \n", n);
	printf("m을 입력해주세요. \n");
	scanf("%d", &m);
	//printf("입력받은 m의 값은 %d \n", m);

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