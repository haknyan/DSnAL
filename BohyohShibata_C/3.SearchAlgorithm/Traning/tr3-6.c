#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int *a, const int *b) {
    if(*a < *b)
        return 1;
    else if(*a > *b)
        return -1;
    else
        return 0;
}

int main(void) {
    int i, nx, ky;
    int *x;
    int *p;

    puts("bsearch 함수 사용 검색");
    printf("요소개수: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("내림차순 입력\n");
    printf("x[0]: ");
    scanf("%d", &x[0]);

    for(i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i);
            scanf("%d", &x[i]);
        } while(x[i] > x[i - 1]);
    }
    printf("검색값: ");
    scanf("%d", &ky);

    p = bsearch(&ky,
                x,
                nx,
                sizeof(int), 
                (int(*)(const void *, const void *)) int_cmpr
                );
    
    if(p == NULL)
        puts("검색실패");
    else
        printf("%d은(는) x[%d]에 있음\n", ky, (int)(p - x));
    free(x);

    return 0;
    
}