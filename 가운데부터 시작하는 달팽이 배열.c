#include <stdio.h>

void main() {
	int C[5][5];
	int k = 26;
	int sw = 1;
	int n = 5;
	int i = -1, j = 0;

	while (n) {
		for (int P=0 ; P<n ; P++) {              // n부터 1까지 1씩 감소하면서 순환 진행
			k = k - 1;		                         // 할당할 일련번호 감소
			i = i + sw;	                           // 행 번호를 sw만큼 추가
			C[i][j] = k;					
		}
		n = n - 1;			                         // 변수 n값 감소

		if (n <= 0)	                             // 변수 n값이 5, 4, 3, 2, 1까지 진행되었으면 종료
			break;

		for (int P=0 ; P<n; P++) {               // n부터 1까지 1씩 감소하면서 순환 진행
			k = k - 1;		                         // 할당할 일련번호 감소
			j = j + sw;		                         // 열 번호를 sw만큼 추가
			C[i][j] = k;
		}
		sw = sw * (-1);			                     // 증감의 역할 반전
	}
	for (i = 0; i <= 4; i++) {
		for (j=0 ; j<=4 ; j++) {
			printf("%3d", C[i][j]);	                // C배열 출력
		}
		printf("\n");
	}
}
