#include <stdio.h>

int main ()
{   //this program calculates the product of the numbers in the main number//

    int X, k;

    scanf("%d%d", &k, &X);

    switch(k){
        case 1 : printf("%d", X); break;
        case 2 : printf("%d", (X/10) * (X%10)); break;
        case 3 : printf("%d", (X/100) * ((X%100)/10) * (X%10)); break;
        case 4 : printf("%d", ((X/100)/10) * ((X/100)%10) * ((X%100)/10) * (X%10)); break;
        default : break;
    }

    return 0;
}