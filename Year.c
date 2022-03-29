#include <stdio.h>


int main ()
{   //this program shows you the day number in the year//
    int m, d, num;
    scanf("%d%d", &m, &d);

    switch (m) {
        case 1 : printf("%d", num = d); break;
        case 2 : printf("%d", num = 31 + d); break;
        case 3 : printf("%d", num = 59 + d); break;
        case 4 : printf("%d", num = 90 + d); break;
        case 5 : printf("%d", num = 120 + d); break;
        case 6 : printf("%d", num = 151 + d); break;
        case 7 : printf("%d", num = 181 + d); break;
        case 8 : printf("%d", num = 212 + d); break;
        case 9 : printf("%d", num = 243 + d); break;
        case 10 : printf("%d", num = 273 + d); break;
        case 11 : printf("%d", num = 304 + d); break;
        case 12 : printf("%d", num = 334 + d); break;
          }

    return 0;
}