// int형 변수 a, b를 선언한 후
// 사용자 입력을 통해 값을 입력받고
// 둘 중, 어떤 값이 더 큰지 검사하여
// 더 큰 값을 출력해주세요.

// ex
// input
// a를 입력
// 10
// b를 입력
// 20

// output
// 더 큰 값은 20 입니다.

#include <stdio.h>

void main()
{
	int a, b;
	printf("a를 입력 :");
	scanf("%d", &a);
	printf("b를 입력 :");
	scanf("%d", &b);
	printf("더 큰 값은 %d 입니다. \n", a > b ? a:b);
}