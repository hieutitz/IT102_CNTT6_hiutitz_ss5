#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a == b) {
        printf("Hai so bang nhau");
    }else if (a > b) {
        printf("%d\n", a);
    }else {
        printf("%d\n", b);
    }
    return 0;
}
