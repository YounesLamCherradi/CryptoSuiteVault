#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int binaryasci[65];
    //Example TesT
    int numbers[65]={199, 203, 135, 135, 74, 196, 60, 67,
144, 132, 21, 153, 218, 128, 121, 41,
140, 227, 41, 4, 189, 122, 207, 227,
159, 193, 59, 77, 68, 62, 74, 70,
42, 132, 132, 87, 72, 132, 59, 199,
139, 202, 148, 132, 36, 67, 62, 87,
74, 60, 189, 17, 18, 35, 159, 71,
4, 110, 46, 191, 159, 68, 202, 71};

    for (int i = 0; i < 64; i++) {
        int x = jacobiansymbols(numbers[i], 13);
        if(x==1)
           binaryasci[i]=0;
        else
           binaryasci[i]=1;


    }
    
    for(int i=0;i<64;i++){
        printf("%d",binaryasci[i]);
    }
    


    return 0;
}
