#include <stdio.h>

// H�m t�nh s? Fibonacci th? n
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Nhap so n: ");
    scanf("%d", &n);

    printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));

    return 0;
}

