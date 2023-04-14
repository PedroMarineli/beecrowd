#include <iostream>

int main(){
    float n, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m05 = 0, m02 = 0, m01 = 0, m005 = 0, m001 = 0;

    while (n != 0) {
        if (n >= 100) {
            n = n - 100;
            n100++;
        }else if (n >= 50) {
            n = n - 50;
            n50++;
        }else if (n >= 20) {
            n = n - 20;
            n20++;
        }else if (n >= 10) {
            n = n - 10;
            n10++;
        }else if (n >= 5) {
            n = n - 5;
            n5++
        } 
    }

    printf("NOTAS:\n%f nota(s) de R$ 100.00\n%f nota(s) de R$ 50.00\n%f nota(s) de R$ 20.00\n%f nota(s) de R$ 10.00\n%f nota(s) de R$ 5.00\n%f nota(s) de R$ 2.00\nMOEDAS:\n%f moeda(s) de R$ 1.00\n%f moeda(s) de R$ 0.50\n%f moeda(s) de R$ 0.25\n%f moeda(s) de R$ 0.10\n%f moeda(s) de R$ 0.05\n%f moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m05, m02, m01, m005, m001);
}