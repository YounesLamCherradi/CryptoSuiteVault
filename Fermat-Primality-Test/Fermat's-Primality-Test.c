#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SquareMultiplying(int base, int power, int mod) {
    int result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % mod;
        }
        power = power / 2;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int CheckNumbers[] = {37, 38, 541, 551, 561, 571, 1001, 1501, 1693, 1729, 2721, 5227, 6601, 7355, 8911, 9121, 10549};
    int size = sizeof(CheckNumbers) / sizeof(CheckNumbers[0]);
    
    srand(time(NULL)); 

    for (int i = 0; i < size; i++) {
        int p = CheckNumbers[i];
        int a = rand() % (p - 3) + 2;     
        int prime = 1;

        if (SquareMultiplying(a, p - 1, p) != 1) {
            prime = 0; 
        }

        if (prime) {
            printf("%d is PRIME\n", p);
        } else {
            printf("%d is NOT PRIME\n", p);
        }
    }

    return 0;
}