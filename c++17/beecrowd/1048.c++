#include <cstdio>
#include <iostream>

int main(){
    float sal, p;

    scanf("%f", &sal);

    if (sal <= 400.00) {
        p = 15;
    }else if (sal <= 800.00) {
        p = 12;
    }else if (sal <= 1200.00) {
        p = 10;
    }else if (sal <= 2000.00) {
        p = 7;
    }else {
        p = 4;
    }
    printf("Novo salario: %.2f\n", sal+(sal*p)/100);
    printf("Reajuste ganho: %.2f\n", (sal*p)/100);
    printf("Em percentual: %.0f %\n", p);
}