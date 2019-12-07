#include <stdio.h>

int main()
{
	int  B[5][5] = { 0, };
	int  i = 0;	   																								       					  		// 행
	int  j = 0;																										                     	// 열
	int  sw = 1;																								                        // sw가 1이면 대각선 위로 증가, sw가 –1 대각선 아래로 감소
	int  k = 1;																											                    // 출력되는 숫자 ( 1 ~ 25 )

	for (; k <= 25; sw = sw * (-1)) {																										// k 값이 25, 1과 -1 번갈아가며 반복
		for (; i >= 0 && j >= 0 && i < 5 && j < 5; i = i + sw, j = j - sw, ++k) {
			B[i][j] = k;
		}
		if (sw == 1) {																																	  // 대각선 아래 방향
			if (i >= 5) {																																	  // 한 칸 오른쪽
				i = i - 1;
				j = j + 2;
			}
			else {																																			  	// 한 칸 아래
				j = j + 1;
			}
		}
		else {																																				  	// 대각선 위 방향
			if (j >= 5) {
				i = i + 2;																															  		// 한 칸 아래
				j = j - 1;
			}
			else {																																		  		// 한 칸 오른쪽
				i = i + 1;
			}
		}
	}
	for (i = 0; 5 > i; ++i) {																												  	// 행을 5까지 출력
		for (j = 0; 5 > j; ++j) {																											  	// 열을 5까지 출력
			printf("%3d", B[i][j]);																											  	// B배열을 출력
		}
		putchar('\n');
	}
	return 0;
}
