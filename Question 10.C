#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }

    printf("The sum of the series is %d", sum);

    return 0;
}
