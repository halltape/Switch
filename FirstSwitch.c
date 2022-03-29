#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int k;
    scanf("%d", &k);
    switch (k){
        default : break;
        case 1 : printf("плохо\n"); break;
        case 2 : printf("неудовлетворительно\n"); break;
        case 3 : printf("удовлетворительно\n"); break;
        case 4 : printf("хорошо\n"); break;
        case 5 : printf("отлично\n"); break;
    }
    return 0;
}