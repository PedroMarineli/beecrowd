#include <iostream>

int main(){
    int num, n, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    scanf("%d", &n);
    num = n;
    
    while (num >= 100) {
        num = num - 100;
        n100++;
    }
    while (num >= 50) {
        num = num - 50;
        n50++;
    }
    while (num >= 20) {
        num = num - 20;
        n20++;
    }
    while (num >= 20) {
        num = num - 20;
        n20++;
    }
    while (num >= 10) {
        num = num - 10;
        n10++;
    }
    while (num >= 5) {
        num = num - 5;
        n5++;
    }
    while (num >= 2) {
        num = num - 2;
        n2++;
    }
    while (num >= 1) {
        num = num - 1;
        n1++;
    }   

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);
    
}