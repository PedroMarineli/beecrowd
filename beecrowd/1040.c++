#include <cstdio>
#include <iostream>

int main(){
    float n1, n2, n3, n4, med, exa;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    med = n1*0.2+n2*0.3+n3*0.4+n4*0.1;

    printf("Media: %.1f\n", med);

    if (med>=7) {
        printf("Aluno aprovado.\n");
    }else if (med<5) {
        printf("Aluno reprovado.\n");
    }else {
        printf("Aluno em exame.\n");
        scanf("%f", &exa);
        printf("Nota do exame: %.1f\n", exa);
        
        med = (med+exa)/2;

        if (med >= 5) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", med);
        }else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", med);
        }
    }
}