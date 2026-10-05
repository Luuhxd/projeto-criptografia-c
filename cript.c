
/******************************************************************************
Atividade Avaliativa – 02
Projeto em C que criptografa palavras usando a Cifra de César e uma
Progressão Aritmética (P.A.), unindo criptografia simples, matemática
aplicada e conceitos de programação.
*******************************************************************************/
#include <stdio.h>
 
int main() {
    char palavra[50];
    int i;
    int shift = 4;           // deslocamento da Cifra de Cesar
    int razao = 3;           // razao da P.A.
    int shiftPA = razao;     // deslocamento atual da P.A.
 
    printf("Digite uma palavra (sem espacos): ");
    scanf("%49s", palavra);
    printf("Original: %s\n", palavra);
 
    // PASSO 1: Cifra de Cesar
    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] = (palavra[i] - 'A' + shift) % 26 + 'A';
        } else if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            palavra[i] = (palavra[i] - 'a' + shift) % 26 + 'a';
        }
    }
    printf("Com Cesar: %s\n", palavra);
 
    // PASSO 2: Cifra com P.A.
    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] = (palavra[i] - 'A' + shiftPA) % 26 + 'A';
            shiftPA = shiftPA + razao;
        } else if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            palavra[i] = (palavra[i] - 'a' + shiftPA) % 26 + 'a';
            shiftPA = shiftPA + razao;
        }
    }
    printf("Com P.A.: %s\n", palavra);
 
    return 0;
}


