#include <stdio.h>
#include <locale.h>

int main ()
{   //This program guess who loves you with a chamomile//
    setlocale (LC_ALL, "");
    int k;
    scanf("%d", &k);

    k = k%2;
    switch (k) {
        case 0 : printf("�� �����"); break;
        default: printf("�����"); break;
    }

    return 0;
}