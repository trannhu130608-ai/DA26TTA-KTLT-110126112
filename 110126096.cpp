#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Thuong: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Thuong: Khong the chia cho 0!\n");
    }

    return 0;
}
