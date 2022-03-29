#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int K, x;
    scanf("%d", &K);

    x = K % 10;

    switch(x){
        case 1: switch(K){
            case 11: printf("ћне 11 лет"); break;
                default: printf("ћне %d год", K); break;
            }
            break;
        case 2: switch(K){
                case 12: printf("ћне 12 лет"); break;
                default: printf("ћне %d года", K); break;
            }
            break;
        case 3: switch(K){
                case 13: printf("ћне 13 лет"); break;
                default: printf("ћне %d года", K); break;
            }
            break;
        case 4: switch(K){
                case 14: printf("ћне 14 лет"); break;
                default: printf("ћне %d года", K); break;
            }
            break;
        default: printf("ћне %d лет", K); break;
    }

    return 0;
}