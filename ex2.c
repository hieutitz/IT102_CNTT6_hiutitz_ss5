#include <stdio.h>

int main() {
    float score;
    scanf("%f", &score);

    if (score >= 8)
        printf("Hoc luc gioi\n");
    else if (score >= 6.5)
        printf("Hoc luc kha\n");
    else if (score >= 5)
        printf("Hoc luc trung binh\n");
    else
        printf("Hoc luc yeu\n");
    return 0;
}
