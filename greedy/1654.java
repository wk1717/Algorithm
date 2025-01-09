import java.util.Scanner;

class 1654{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int K = input.nextInt();
        int N = input.nextInt();

       int[] line = new int[K];
       
       long max = 0;
       for (int i = 0; i < K; i++){
        line[i] = input.nextInt();
        if (line[i] > max) max = line[i];
       }

       long start = 1;
       long end = max;
       long result = 0;

       while (start <= end){
        long mid = (start + end) /2;
        long total = 0;

        for (int i = 0; i < K; i++){
            total += line[i] / mid;
        }

        if (total >= N){
            result = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
       }
       
       System.out.println(result);
       input.close();
    }
}
