#include <stdio.h>

int main() {
    int i = 5;
    int result = i++ + ++i;
    printf("i == %d, result = %d\n", i, result);
    return 0;
}