#include <cstdio>
#include <iostream>

int main(){
    int a, b, cont, h=0;

    scanf("%d %d", &a, &b);

    if (a==b) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else {
        for (cont=0; a!=b; cont++) {
            h++;
            a++;
            if (a>23) {
                a=0;
            }
        }
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
}