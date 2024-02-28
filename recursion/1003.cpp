#include <iostream>
using namespace std;

int count_0 = 0;
int count_1 = 0;

int fibonacci(int n) {

    if (n == 0) {
        count_0++;
        return 0;
    }
    else if (n == 1) {
        count_1++;
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int T, N, result;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        fibonacci(N);
        printf("%d %d \n", count_0, count_1);
        count_0 = 0;
        count_1 = 0;
    }
    return 0;
}