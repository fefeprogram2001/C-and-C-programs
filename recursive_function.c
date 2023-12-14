#include <stdio.h>

int x(int n, int m) {
    if(m == 0) {
        return 0;
    } else {
        return n + x(n, m - 1);
    }
}

int main() {
    int n = 5;
    int m = 2;
    int result = x(n, m);
    printf("The result is %d\n", result);
    return 0;
}
