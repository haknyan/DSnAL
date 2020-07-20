#include <stdio.h>

int sum(int x1, int x2) {
    return x1 + x2;
}

int mul(int x1, int x2) {
    return x1 * x2;
}

void pyo(int(*calc)(int, int)) {
    int i, j;

    for(i = 1; i <=9; i++) {
        for(j = 1; j <= 9; j++) {
            printf("%3d", (*calc)(i, j));
        }
        putchar('\n');
    }
}

int main(void) {
    puts("덧셈표");
    pyo(sum);
    puts("\n곱셈표");
    pyo(mul);

    return 0;
    
}