#include <stdio.h>

int main() {
    int used;
    int price = 0;

    printf("Nhap so met khoi (m3) nuoc tieu thu: ");
    scanf("%d", &used);

    if (used < 0) {
        printf("So met khoi khong hop le.\n");
        return 1;
    }

    if (used <= 10) {
        price = used * 6000;
    } else if (used <= 20) {
        price = 10 * 6000 + (used - 10) * 7000;
    } else if (used <= 30) {
        price = 10 * 6000 + 10 * 7000 + (used - 20) * 8500;
    } else {
        price = 10 * 6000 + 10 * 7000 + 10 * 8500 + (used - 30) * 10000;
    }

    printf("So tien phai tra: %d VND\n", price);
    return 0;
}
