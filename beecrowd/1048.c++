#include <cstdio>
#include <iostream>

int main(){
    float sal, p;

    scanf("%f", &sal);

    if (sal <= 400.00) {
        p = 15;
    }else if (sal <= 800.00) {
        p = 12;
    }
    printf("Novo salario: %.2f\n", sal+(sal*p)/100);
    printf("Reajuste ganho: %.2f\n", (sal*p)/100);
    printf("Em percentual: %.2f %\n", p);
}