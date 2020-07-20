#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int height;
    int weight;
} Person;

int npcmp(const Person *x, const Person *y) {
    return strcmp(x -> name, y -> name);
}

int main(void) {
    Person x[] = {
        {"aaa", 179, 79},
        {"bbb", 172, 63},
        {"ccc", 176, 68},
        {"ddd", 164, 52},
        {"eee", 158, 47},
        {"fff", 189, 92},
    };

    int nx = sizeof(x) / sizeof(x[0]);
    int retry;
    puts("이름 검색");
    do {
        Person temp, *p;
        printf("name: ");
        scanf("%s", temp.name);
        p = bsearch(&temp, x, nx, sizeof(Person),
            (int(*)(const void *, const void *)) npcmp);
        if(p == NULL)
            puts("검색실패");
        else {
            puts("검색성공, 아래 요소를 찾음");
            printf("x[%d]: %s %dcm %dkg\n", 
            (int)(p - x), p -> name, p -> height, p -> weight);
        }
        printf("retry? (1)Yes / (2)No : ");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;

}
