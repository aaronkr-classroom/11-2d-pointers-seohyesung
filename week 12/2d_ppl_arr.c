// 2d_ppl_arr.c
#include <stdio.h>

int main(void) {
	int ages, member, temp, sum;
	unsigned char limit_table[3] = { 4, 2, 3 };
	unsigned char count[3][4];

	//입력 받기
	for (ages = 0; ages < 3; ages++) {
		printf("\n%d대 연령의 윗몸 일으키기 횟수\n", ages + 2);

		// 순서대로 입력 받기
		for (member = 0; member < limit_table[ages]; member++) {
			printf("멤버 #%d: ", member + 1); // #1

			scanf_s("%d", &temp);
			count[ages][member] = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균윗몸 일으키기 횟수\n");

	// 출력
	for (ages = 0; ages < 3; ages++) {
		sum = 0;
		printf("%d0대: ", ages + 2);
		for (member = 0; member < limit_table[ages]; member++) {
			sum = sum + count[ages][member];
		}

		printf("%5.2f\n", (double)sum / limit_table[ages]);
	}
	 //////////////////////////////////////////////////////////////수정필요 오류발생.
	return 0;
}