#include <stdio.h>
int main(void){

    int a, h, w;
    double bov_m, bov_f;
    char sex;

    scanf("%c %d %d %d", &sex, &a, &h, &w);

    switch (sex) {
        case 'm' : printf("|  BMR  |\n");
        case 'm2' : printf("|%.2lf|", bov_m = 10*w + 6.25*h - 5*a + 5); break;
        case 'f' : printf("|  BMR  |\n");
        case 'f2': printf("|%.2lf|", bov_f = 10*w + 6.25*h - 5*a - 161); break;
        default : printf("ERROR!");
    }

     return 0;
}