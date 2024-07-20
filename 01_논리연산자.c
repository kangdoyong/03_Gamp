#include <stdio.h>

// 논리 연산자란?
// 참과 거짓으로 이루어지는 진리값
// 피연산자인 연산을 말합니다.

// 논리 연산자에는 아래와 같은 연산자가 있음
// && - AND 연산
// || - OR 연산
// !  - NOT 연산

void main()
{
	// AND 연산 (논리곱)
	// 피연산자로 오는 2개의 진리값이 모두 1이어야 결과가 1이 됩니다.
	int result = 1 && 1;
	printf("result는 %d \n", result);

	// 관계연산의 결과는 진리값
	// 그럼 해당 값을 가지고, 논리 연산을 할 수 있음
	result = 10 > 50 && 30 < 50;
	printf("result는 %d \n", result);

	// OR 연산 (논리합)
	// 피연산자로 오는 2개의 진리값 중에 하나라도 1이라면, 연산 결과는 1이 됩니다.
	int result2 = 1 || 0;
	printf("result2는 %d \n", result2);

	result2 = (0 && 1) || result;
	printf("result2는 %d \n", result2);

	int result3 = (50 > 40) || (1 && (100 <= 200)) || result2;
	printf("result3는 %d \n", result3);

	// NOT 연산 (논리부정)
	// 피연산자의 진리값을 반대로 뒤집는 연산
	// 1을 0으로, 0을 1로 연산
	int result4 = !result3;
	printf("result4는 %d \n", result4);


}