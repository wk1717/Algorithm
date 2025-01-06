import java.util.Arrays;
import java.util.Scanner;

class 7795{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();

        int[] A, B;
        for (int i = 0; i < T; i++){
            int N = input.nextInt();
            int M = input.nextInt();

            A = new int[N];
            B = new int[M];

            for (int j = 0; j < N; j++){
                A[j] = input.nextInt();
            }
            for (int j = 0; j < M; j++){
                B[j] = input.nextInt();
            }

            Arrays.sort(A); Arrays.sort(B);

            int A_idx, B_idx = 0;
            int total = 0;

            for (A_idx = 0; A_idx < A.length; A_idx++){
                while (B_idx < B.length && A[A_idx] > B[B_idx]) {
                    B_idx++; 
                }
                total += B_idx;
            }

            System.out.println(total);
        }
    }
}
