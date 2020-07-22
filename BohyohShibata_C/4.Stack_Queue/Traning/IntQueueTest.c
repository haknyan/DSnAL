#include <stdio.h>
#include "IntQueue.h"

int main(void) {
    IntQueue que;
    
    if(Initialize(&que, 64) == -1) {
        puts("스택생성 실패");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("현재 데이터 수: %d / %d\n", Size(&que), Capacity(&que));
        printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (0)종료: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu) {
        case 1 :
            printf("데이터: ");
            scanf("%d", &x);
            if(Enque(&que, x) == -1)
                puts("\a오류: 인큐 실패");
            break;
        
        case 2 :
            if(Deque(&que, &x) == -1)
                puts("\a오류: 디큐 실패");
            else
                printf("디큐 데이터: %d\n", x);
            break;
        
        case 3 :
            if(Peek(&que, &x) == -1)
                puts("\a오류: 피크 실패");
            else
                printf("피크 데이터: %d\n", x);
            break;

        case 4: 
            Print(&que);
            break;
        }
    }
    Terminate(&que);
    
    return 0;

}