#include <stdio.h>


int main ()
{   //This program works like a calculator//
    //Put the +/*- and two integer numbers//
    char c;
    int a,b;
    double res;
    scanf("%d %d %c", &a, &b, &c);



    switch (c) {
                case '+' :
                    printf("%.2lf", res = a + b);
                    break;
                case '-' :
                    printf("%.2lf", res = a - b);
                    break;
                case '*' :
                    printf("%.2lf", res = a * b);
                    break;
                case '/' :
                    switch (b) {
                        case 0: printf("ERROR!");
                        return 0;
                    }
                    printf("%.2lf", res = (float) a / b);
                    break;
                default: printf("ERROR!"); break;
                }

    return 0;
}