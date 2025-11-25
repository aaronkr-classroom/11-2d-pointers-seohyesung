// 2d_ptr.c
#include <stdio.h>

int main(void) {
	short data = 3,
		* p = &data, // data변수의 주소
		** pp = &p; // 포인터 p의 주소 (2차원)

	printf("[Before  ] data: %d\n",data); // 3
	*p = 40;
	printf("[Use *p  ] data: %d\n", data); //40
	**pp = 500;
	printf("[Use **pp] data: %d\n", data); // 500

	return 0;
}