#include <iostream>

int main(){
    int n, h = 0, m = 0, s = 0;

    scanf("%d", &n);

    while (n != 0) {
        if (n >= 3600) {
            n = n - 3600;
            h++;
        }else if (n >= 60) {
            n = n - 60;
            m++;
        }else {
            n = n - 1;
            s++;
        }
    }

    printf("%d:%d:%d\n", h, m, s);
}