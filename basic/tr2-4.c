#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int *a;
    int na;

    printf("num: ");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));

    if(a == NULL) {
        puts("fail");
    } else {
        printf("%d개의 정수 입력\n", na);
        for(i = 0; i < na; i++) {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        printf("각 요솟값은 아래\n");
        for(i = 0; i < na; i++) {
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }

    return 0;
    
}