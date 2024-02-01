#include <stdio.h>
#include <math.h>

int main() {
    int p;
    scanf("%d", &p);

    if (p == 2 || p == 3) {
        printf("Prime");
    } else if (p == 1 || p % 2 == 0) {
        printf("Not Prime");
    } else {
        int isPrime = 1;
        for (int i = 3; i <= sqrt(p); i += 2) {
            if (p % i == 0) {
                printf("Not Prime, Factors: %d and %d", i, p / i);
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("Prime");
        }
    }

    return 0;
}
