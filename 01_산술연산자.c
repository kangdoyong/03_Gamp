#include <stdio.h>

// 산수연산자란?
// 수치 형식의 데이터를 다루는 연산자
// 수치 형식 : 정수, 부동 소수점 형식
// + 덧셈
// - 뺄셈
// * 곱셈
// / 나눗셈
// % 나머지

void main()
{
	int a = 3;
	int b = 2;

	double add = a + b;
	double sub = a - b;
	double mul = a * b;
	double div = a / b;
	double rem = a % b;

	printf("add : %.2f \n", add);
	printf("sub : %.2f \n", sub);
	printf("mul : %.2f \n", mul);
	printf("div : %.2f \n", div);
	printf("rem : %.2f \n", rem);

	// 나눗셈의 몫을 소수점 자리까지 구하려면?
	// -> 현재 두 피 연산자가 모두 정수 타입의 데이터이기 때문에 연산의 결과도 정수로 반환 됨
	//    우리는 현재 정수로 반환된 결과를 단순히 실수 타입의 변수에 옮겨 담고 있는 것 뿐임

	// -> 이럴 때 형변환을 사용, 그 중 정확히는 명시적 변환(캐스팅)을 이용
	//	  피연산자를 실수 타입의 데이터로 변환하여 연산하면 실수 타입의 연산 결과를 얻을 수 있음

	div = (double)a / b;
	printf("div : %.2f \n", div);

	div = a / (double)b;
	printf("div : %.2f \n", div);

	div = (double)a / (double)b;
	printf("div : %.2f \n", div);

	// 위의 세 방법 모두 올바른 결과가 출력됨
	// -> 특정 한 쪽에만 캐스팅을 해도 정상적으로 연산이 이루어짐
	//	  프로그래밍에서 연산 시, 두 피연산자의 데이터 타입이 서로 다르다면
	//	  더 큰 데이터타입을 기준으로 연산이 이루어지기 때문에

}