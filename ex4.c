#include <stdio.h>

int main() {
    float salary;
    float tax;
    scanf("%f",&salary);

    if (salary <= 5) {
        tax = salary * 0.05 * 1000000;
        printf("So thue bang %f vnd",tax);
    }else if (salary <= 10) {
        tax = salary * 0.10 * 1000000;
        printf("So thue bang %f vnd",tax);
    }else {
        tax = salary * 0.15 * 1000000;
        printf("So thue bang %f vnd",tax);
    }
    return 0;
}
