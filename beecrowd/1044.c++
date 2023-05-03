#include <iostream>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if (b%a==0 or a%b==0) {
        printf("Sao Multiplos\n");
    }else {
        printf("Nao sao Multiplos\n");
    }
}