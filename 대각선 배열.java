public class 그림1 {

public static void main(String[] args) {

		int[][] A = new int[5][5];	             	  // A배열 5행 5열의 공간을 형성
		int k = 0; 			                            // k의 초기값을 0으로 준다.
				
		for(int SPIN=0 ; SPIN<9 ; SPIN++) {   	    // SPIN의 변수를 증가
			for(int j=0 ; j<A.length ; j++) {
				int i = SPIN - j; 	                    // 행
				if(i>=0 && i<5) {                       // 행이 1과 5 사이에 있는지 판단
					k = k + 1;	                          // k를 1 증가
					A[i][j] = k;
				}
			}			
		}
		for(int i=0 ; i<A.length ; i++) {	          // i의 변수를 1부터 5까지 1씩 증가
			for(int j=0 ; j< A[i].length ; j++) {
				System.out.print(A[i][j] + "\t");	      // A배열을 출력
			}
			System.out.println();
		}	
	}
}
