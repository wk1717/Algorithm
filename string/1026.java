import java.util.Arrays;
import java.util.Scanner;

public class 1026{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();

        int[] A = new int[N];
        for (int i = 0; i < N; i++){
            A[i] = input.nextInt();
        }
        Arrays.sort(A);

        int[] B = new int[N];
        for (int i = 0; i < N; i++){
            B[i] = input.nextInt();
        }
        Arrays.sort(B);
        for (int i = 0; i < B.length/2; i++){
            int temp = B[i];
            B[i] = B[B.length - i - 1];
            B[B.length - i - 1] = temp;
        }

        int[] result = new int[N];
        int total = 0;
        for (int i = 0; i < A.length; i++){
            result[i] = A[i] * B[i];
            total += result[i];
        }
        
        System.out.println(total);

        input.close();
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 64d11db5b484c61a3a3f94e289a81308503bd459
