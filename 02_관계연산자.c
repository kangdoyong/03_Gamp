#include <stdio.h>

void main()
{
	// 주어진 조건이 참인지 거짓인지 결과를 출력
	// int형 변수 a, b를 선언하고
	// a, b에 값을 사용자 입력을 받고
	// 아래와 같이 a, b의 관계 연산의 결과를 출력

	// 1. a와 b가 같은지
	// 2. a가 b 이상인지
	// 3. b가 a 미만인지
	// 4. a가 b 이하인지

	int a, b;
	printf("a를 입력해주세요 :");
	scanf("%d", &a);
	printf("b를 입력해주세요 :");
	scanf("%d", &b);

	printf("a와 b가 같은지? %d \n", a == b);
	printf("a가 b 이상인지? %d \n", a >= b);
	printf("b가 a 미만인지? %d \n", b < a);
	printf("a가 b 이하인지? %d \n", a <= b);

}