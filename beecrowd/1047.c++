#include <cstdio>
#include <iostream>

int main(){
    int a, b, cont, h=0, h1=0, a1, b1;

    scanf("%d %d %d %d", &a, &a1, &b, &b1);

    if (a==b && a1==b1) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else {
        if (a1>b1) {
            h--;
        }
        if (a1>b1 && a==b) {
            h++;
        }
        for (cont=0; a!=b; cont++) {
            h++;
            a++;
            if (a>23) {
                a=0;
            }
        }
        for (cont=0; a1!=b1; cont++) {
            h1++;
            a1++;
            if (a1>59) {
                a1=0;
            }
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTOS(S)\n", h, h1);
    }
}