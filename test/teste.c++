#include <cstdio>
#include <string.h>

int main(){
    char nome[50], palavra[50], s[50];
    scanf("%s", nome);
    scanf("%s", palavra);

    if (strcmp(nome,palavra)!=0) {
        printf("diferentes\n");
        printf("%d", strcmp(nome,palavra));
    }
    else {
        printf("iguais\n");
    }

    strcpy(s, palavra);
    printf("sobrenome %s", s);
}