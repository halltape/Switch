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
            case 11: printf("��� 11 ���"); break;
                default: printf("��� %d ���", K); break;
            }
            break;
        case 2: switch(K){
                case 12: printf("��� 12 ���"); break;
                default: printf("��� %d ����", K); break;
            }
            break;
        case 3: switch(K){
                case 13: printf("��� 13 ���"); break;
                default: printf("��� %d ����", K); break;
            }
            break;
        case 4: switch(K){
                case 14: printf("��� 14 ���"); break;
                default: printf("��� %d ����", K); break;
            }
            break;
        default: printf("��� %d ���", K); break;
    }

    return 0;
}