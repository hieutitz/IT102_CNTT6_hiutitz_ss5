#include <stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("Nhap hai so thuc a, b: ");
    scanf("%f %f", &a, &b);

    printf("Chon phep tinh:\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("Nhap lua chon (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Ket qua: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Ket qua: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Ket qua: %.2f\n", result);
            break;
        case 4:
            if (b == 0) {
                printf("Loi: chia cho 0!\n");
            } else {
                result = a / b;
                printf("Ket qua: %.2f\n", result);
            }
            break;
        default:
            printf("Loi: lua chon khong hop le.\n");
    }

    return 0;
}
