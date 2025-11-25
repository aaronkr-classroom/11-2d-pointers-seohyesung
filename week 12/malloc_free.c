// malloc_free.c
#include <stdio.h>

void Test() {
	// 힙에 200바이트 할당함
	short* p = (short*)malloc(100);
	// free(p); // 실수로 메모리 할당ㅇㄹ 해제 안하면 오류발생할 수 있음.
}

int main(void) {
	int i;
	// 메모리가 100바이트씩 100번 동적 할당됨
	for (i = 0; i < 100; i++) Test();
	return 0;
}