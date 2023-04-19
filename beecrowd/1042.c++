#include <cstdio>
#include <iostream>

int main(){
    int a, b, c, p = 0, s = 0, t = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c && b>c) {
        p = a;
        s = b;
        t = c;
        
    }else if (a>b && a>c && b<c) {
            p = a;
            s = c;
            t = b;
        }
    
    if (b>a && b>c && c>a) {
        p = b;
        s = c;
        t = a;
        
    }else if (b>a && b>c && c<a) {
            p = b;
            s = a;
            t = c;
        }

    if (c>a && c>b && b>a) {
        p = c;
        s = b;
        t = a;
        
    }else if (c>a && c>b && b<a) {
            p = c;
            s = a;
            t = b;
        }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", t, s, p, a, b, c);
}