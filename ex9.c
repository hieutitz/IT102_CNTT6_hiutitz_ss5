#include <stdio.h>

int main() {
    float heSoLuong;
    int ngayCong, chucVu;
    int phuCap = 0, thuong = 0, luong;

    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &ngayCong);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);

    switch (chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            printf("Chuc vu khong hop le.\n");
            return 1;
    }

    if (ngayCong > 26) {
        thuong = (ngayCong - 26) * 200000;
    }

    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    printf("Luong thang = %d VND\n", luong);

    return 0;
}
