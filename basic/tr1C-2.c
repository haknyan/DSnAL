#include <stdio.h>

int main(void) {
    int no;
    printf("Enter 2 digit num\n");
    do {
        printf("num: ");
        scanf("%d", &no);
    } while(no < 10 || no > 99);
    printf("num = %d\n", no);

    return 0;
}