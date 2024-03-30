#include <cstdio>
#include <iostream>

int main(){
    float i, num, val=0;
    for (i=0; i!=6; i++) {
        scanf("%f", &num);
        if (num>0) {
            val++;
        }
    }
    printf("%.0f valores positivos\n", val);
}