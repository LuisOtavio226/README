#include <stdio.h>
int main()
{
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);
    if(idade < 12){
        printf("você é criança");
    } else if (idade >= 12 && idade <= 17) {
        printf("Você é adolescente.\n");
    } else {
        printf("Você é um Adulto");
    }
        
    return 0;
}