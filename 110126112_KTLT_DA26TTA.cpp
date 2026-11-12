#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &a, &b);

    printf("Tong = %d\n", a + b);
    printf("Hieu = %d\n", a - b);
    printf("Tich = %d\n", a * b);
    printf("Thuong = %.2f\n", (float)a / b);

    return 0;
}
