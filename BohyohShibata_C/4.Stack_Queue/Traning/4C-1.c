#include <stdio.h>

#define N 10

int main() {
    int i;
    int a[N];
    int cnt = 0;
    int retry;

    puts("정수 입력");

    do {
        printf("%d번째 정수:", cnt + 1);
        scanf("%d", &a[cnt++ % N]);
        printf("retry?(Yes 1/No 0):");
        scanf("%d", &retry);
    } while(retry == 1);

    i = cnt - N;
    if(i < 0) i = 0;
    for(; i < cnt; i++)
        printf("%2d번째 정수 = %d\n", i + 1, a[1 % N]);

    return 0;

}