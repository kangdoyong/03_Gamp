#include <stdio.h>

// 단항연산자란?
// 피연산자가 1개인 연산자입니다.
// 증가 연산과 감소 연산을 사용할 수 있음 (증감 연산)
// 경우에 따라 전위 연산과 후위 연산으로 나눌 수 있습니다.



void main()
{
	int count = 0;

	// 증가 연산자 ++
	// -> 피연산자의 값을 1 증가시킵니다.
	++count;
	printf("count의 값은 %d \n", count);

	// 감소 연산자 --
	// -> 피연산자의 값을 1 감소시킵니다.
	--count;
	printf("count의 값은 %d \n", count);

	// 전위 연산자
	// 증감 연산을 피연산자 앞에 사용할 경우
	// -> 연산 후 결과를 반환
	printf("++count는 %d \n", ++count);

	// 후위 연산자
	// 증감 연산을 피연산자 뒤에 사용할 경우
	// -> 연산 하기 전에 결과를 반환한 후, 연산합니다.
	printf("count++는 %d \n", count++);
	printf("count는 %d \n", count);
	
	
}