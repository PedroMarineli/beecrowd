#include <cstdio>
#include <iostream>

int main(){
    int a, b, cont, h=0, h1=0, a1, b1;

    scanf("%d %d %d %d", &a, &a1, &b, &b1);

    for (cont=0; a1!=b1 or a!=b; cont++) {
        h1++;
        a1++;
        if (a1>59) {
            a1=0;
            a++;
            if (a>23) {
                a=0;
            }
        }
        if (h1>59) {
            h1=0;
            h++;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, h1); 
}