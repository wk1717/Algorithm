import java.util.*;

class 2667{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        input.nextLine();

        int[][] graph = new int[N][N];

        for (int i = 0; i < N; i++){
            String line = input.nextLine();
            for (int j = 0; j < N; j++){
                graph[i][j] = line.charAt(j) - '0';
            }
        }

        boolean[][] visited = new boolean[N][N];
        List<Integer> sizes = new ArrayList<>();
        Queue<int[]> queue = new LinkedList<>();

        int[] x = {0, 0, -1, 1};
        int[] y = {-1, 1, 0, 0};

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if(graph[i][j] == 1 && !visited[i][j]){
                    int currentSize = 0;
                    visited[i][j] = true;
                    queue.add(new int[]{j, i});

                    while(!queue.isEmpty()){
                        int[] cur = queue.poll();
                        currentSize++;
                        for (int k = 0; k < 4; k++){
                            int dx = cur[0] + x[k];
                            int dy = cur[1] + y[k];
                            if (dy < 0 || dy >= N || dx < 0 || dx >= N) continue;
                            if (graph[dy][dx] == 1 && !visited[dy][dx]){
                                visited[dy][dx] = true;
                                queue.add(new int[]{dx, dy});
                            }
                        }
                    }
                    sizes.add(currentSize);
                }
            }
        }

        Collections.sort(sizes);
        System.out.println(sizes.size());
        for (int size : sizes){
            System.out.println(size);
        }

        input.close();
    }
}