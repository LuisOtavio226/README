#include <stdio.h>

int main()
{
    int senha = 0;
    
    while(senha != 226) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    
        
        if (senha != 226) {
            printf("senha incorreta, tente novamente.\n");
        }
    }    
    
    printf("Acsso Liberado.\n");
    
    return 0;
}