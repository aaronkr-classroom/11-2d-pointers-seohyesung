// mem_arr.c
#include <stdio.h>
#include <malloc.h> // 추가

int main(void) {
	int* p_num_list, // 변경
		count = 0,
		sum = 0,
		limit = 0, // 추가
		i;

	printf("사용할 최대 개수를 입력하세요: >>> ");
	scanf_s("%d", &limit);

	// 사용자가 입력한 개수 만큼 정수를 저장할 수 있는 메모리를 할당
	p_num_list = (int*)malloc(sizeof(int) * limit);

	// 최대 5회 까지 입력 받고 중간에 9999를 누르면 종료
	while (count < limit) { //변경
		printf(" 숫자를 입력하세요 (9999를 누르면 종료): ");

		scanf_s("%d", p_num_list + count); // *p + 1 와 비슷함

		if (*(p_num_list + count) == 9999) break; // 변경

		count++; // 입력된 횟수를 계산함
	}

	// 입력된 횟수만큼 숫자를 출력함
	for (i = 0; i < count; i++) {
		if (i > 0) printf(" + "); // num[0] = 3 = num[1] = 5
		printf("%d", *(p_num_list + i)); // 변경
		sum = sum + *(p_num_list + i); // 변경
	}
	printf(" = %d\n", sum);
	free(p_num_list); // 사용했던 메모리를 제거함

	return 0;
}