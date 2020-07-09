#include <stdio.h>

int main() {
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

    printf("char size = %ld \t char array size = %4ld\n", sizeof(c), sizeof(c_array));
    printf("int size = %ld \t int array size = %4ld\n", sizeof(i), sizeof(i_array));
    printf("short size = %ld \t short array size = %4ld\n", sizeof(s), sizeof(s_array));
    printf("float size = %ld \t flaot array size = %4ld\n", sizeof(f), sizeof(f_array));
    printf("long size = %ld \t long array size = %4ld\n", sizeof(l), sizeof(l_array));

    return 0;
}