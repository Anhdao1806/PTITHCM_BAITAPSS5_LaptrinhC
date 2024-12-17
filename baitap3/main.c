#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap so nguyen duong : ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Nhap so lon hon 0.\n");
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d la : %d\n", n, sum);

    return 0;
}

