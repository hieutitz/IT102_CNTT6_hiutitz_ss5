#include <stdio.h>

int main() {
    int age;
    float price = 20000;
    float newPrice;

    printf("Nhap tuoi hanh khach: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Tuoi khong hop le.\n");
        return 0;
    }

    if (age < 6) {
        newPrice = 0;
    } else if (age <= 18) {
        newPrice = price * 0.5;
    } else if (age <= 60) {
        newPrice = price;
    } else {
        newPrice = price * 0.7;
    }

    printf("Tien ve phai tra: %.0f VND\n", newPrice);
    return 0;
}
