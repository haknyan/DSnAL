#include <stdio.h>

int main(void) {
    int n;

    printf("num: "); scanf("%d", &n);

    if(n > 0) {
        printf("num is Posistive\n");
    } else if(n < 0) {
        printf("num is Negative\n");
    } else {
        printf("num is Zero\n");
    }

    return 0;
}