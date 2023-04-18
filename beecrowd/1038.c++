#include <iostream>

int main(){
    int cod, qua; float pre, fin;

    scanf("%d %d", &cod, &qua);

    if (cod == 1) {
        pre = 4;
    }else if (cod == 2) {
        pre = 4.5;
    }else if (cod == 3) {
        pre = 5;
    }else if (cod == 4) {
        pre = 2;
    }else if (cod == 5) {
        pre = 1.5;
    }

    printf("Total: R$ %.2f\n", qua*pre);
}