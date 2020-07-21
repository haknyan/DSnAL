#include <stdio.h>
#include "IntStack.h"

int main(void) {
    IntStack s;
    
    if(Initialize(&s, 64) == -1) {
        puts("스택생성 실패");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("현재 데이터 수: %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu) {
        case 1 :
            printf("데이터: ");
            scanf("%d", &x);
            if(Push(&s, x) == -1)
                puts("\a오류: 푸시 실패");
            break;
        
        case 2 :
            if(Pop(&s, &x) == -1)
                puts("\a오류: 팝 실패");
            else
                printf("팝 데이터: %d\n", x);
            break;
        
        case 3 :
            if(Peek(&s, &x) == -1)
                puts("\a오류: 피크 실패");
            else
                printf("피크 데이터: %d\n", x);
            break;

        case 4: 
            Print(&s);
            break;
        }
    }
    Terminate(&s);
    
    return 0;

}