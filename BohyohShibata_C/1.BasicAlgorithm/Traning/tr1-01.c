#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("max value\n");
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("max value is %d\n", max);

    return 0;
}