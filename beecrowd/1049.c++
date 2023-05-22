#include <cstdio>
#include <iostream>
#include <string.h>

int main(){
    int col=0; char  pri[30], seg, ter, vertebrado[30]="vertebrado";
    scanf("%s", &pri);
    scanf("%s", &seg);
    scanf("%s", &ter);

    if (pri == vertebrado) {
        col = col + 4;
    }
    printf("%s %d", vertebrado, col);
}