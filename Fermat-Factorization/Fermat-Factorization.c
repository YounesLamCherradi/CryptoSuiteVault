#include <stdio.h>
#include <math.h>

int main() {
    int a, p, q, Y = 0;
    scanf("%d", &a);
    int flag = 0;
    double result;
    int i;
    
    for(i = 1; i <= a; i++) {
        Y = i;
        result = sqrt(a + pow(i, 2));
        if(result == (int)result) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) {   
        p = (int)result + Y;
        q = (int)result - Y;
    }
  
    printf("The number of iteration is: %d\n", Y); 
    printf("%d\n", p);
    printf("%d\n", q);
    
    return 0;
}
