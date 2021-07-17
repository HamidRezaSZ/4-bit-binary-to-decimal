#include <stdio.h>

int main(void) {
    int x, y, z, u, sum;
    printf("Enter 4-bit binary number with space:(For example: 1 1 1 1)\n");
    scanf("%d%d%d%d", &x, &y, &z, &u);
    z = z * 2;
    y = y * 4;
    x = x * 8;
    sum = x + y + z + u;
    printf("%d\n", sum);
    printf("Press 'Enter' to exit\n");
    scanf("%2c");
}