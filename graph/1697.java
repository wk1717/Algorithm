import java.util.*;

class 1697{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        int K = input.nextInt();

        int max = 100001;
        boolean[] visited = new boolean[max];
        int[] time = new int[max];        
         
        Queue<Integer> queue = new LinkedList<>();
        queue.add(N);
        visited[N] = true;

        while (!queue.isEmpty()){
            int current = queue.poll();

            if (current == K) {
                System.out.println(time[current]);
                return;
            }

            int[] next = {current - 1, current + 1, current * 2};
            for (int nextVertex : next){
                if (nextVertex >= 0 && nextVertex < max && !visited[nextVertex]){
                    visited[nextVertex] = true;
                    queue.add(nextVertex);
                    time[nextVertex] = time[current] + 1;
                }
            }
        }
        input.close();
    }
}