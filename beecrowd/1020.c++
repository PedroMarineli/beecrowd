#include <cstdio>
#include <iostream>

int main(){
    int n, a = 0, m = 0, d = 0;

    scanf("%d", &n);

    while (n != 0) {
        if (n >= 365) {
            n = n - 365;
            a++;
        }else if (n >= 30) {
            n = n - 30;
            m++;
        }else {
            n = n - 1;
            d++;
        }
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
}