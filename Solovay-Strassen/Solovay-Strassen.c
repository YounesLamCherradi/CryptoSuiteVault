#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Squaremultiplying(int base, int power, int mod) {
    int result=1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        power = power / 2;
    }
    return result;
}

int jacobiansymbols(int a, int n) {
    int result = 1;
    if (a == 0) {    
        return 0;
    } else if (a == 1) { 
        return 1;
    } else if (a == 2) {           
        if (n % 8 == 1 || n % 8 == 7)
            return 1;
        else
            return -1;
    }    

    
    while (a) {
        while (a % 2 == 0) {
            a = a / 2;
            if (n % 8 == 3 || n % 8 == 5) {
                result = -result;
            }
        }
        int temp = a;
        a = n;
        n = temp;
        if (a % 4 == 3 && n % 4 == 3) {
           result=-result;
        }
        
        a = a % n;  

    }
    if (n == 1) {
        return result; 
    }

    return 0;
}

int main() {
    
    // USE CASE Example:
    int numbers[17] = {37, 38, 541, 551, 561, 571, 1001, 1501, 1693, 1729, 2721,
                       5227, 6601, 7355, 8911, 9121, 10549};

    srand(time(NULL));

    for (int i = 0; i < 17; i++) {
        if (numbers[i] == 2 || numbers[i] <= 1 || numbers[i] % 2 == 0) {
            printf("%d is not a prime number\n", numbers[i]);
            continue;
        }
    
        int a = rand() % (numbers[i] - 1) + 1;

        int x = jacobiansymbols(a, numbers[i]);
        int y = Squaremultiplying(a, (numbers[i] - 1) / 2, numbers[i]);

        if (y != 1 && y != numbers[i]-1 && y!=x) {
            printf("%d is composite\n", numbers[i]);
        } else {
            printf("%d might be a prime number\n", numbers[i]);
        }
    }

    return 0;
}