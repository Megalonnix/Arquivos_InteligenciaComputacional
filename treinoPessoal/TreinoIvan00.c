#include <stdio.h> // Lib. padrão para INPUTS/OUTPUTS

void showUsuario(
    char nmDigit[],
    int iddDidit,
    float saldDigit,
    float altDigit,
    float comprasDigit[]) 
{
    printf("\n === DADOS USUARIO ===\n");
    printf("Nome: %s \n", nmDigit);
    printf("Idade: %d anos \n", iddDidit);
    printf("Saldo: %f reais \n", iddDidit);
    printf("Altura: %d metros \n", iddDidit);
    printf("Compra 1: R$ %.2f \n", comprasDigit[0]);

    // lOOP: lendo compras restantes:
    for (int c = 0; c < 3; c++) {
        // if (c > 0) printf("%.2f \n", comprasDigit[c]);
        if (c > 0)
            printf("Compra %d: R$ %.2f \n", c + 1, comprasDigit[c]);
    }
}

int main() {
    
    // 1. Tipos básicos de variáveis:
    char nome[20];
    int idade = 0;
    float saldo = 0.0;
    float altura = 0.0;
    char sexo;

    /* 2. Vetor:
       Em linguagrem C, vetores armazenam valores
       do msm tipo numa sequência FINITA.
       Ex: compras[0], compras[1], ..., compras[n] 
    */

    float ultimasCompras[3];

    // 3. Obter Info. do cliente:

    printf("\nDigite seu nome: ");
    scanf("%s", nome);      // Para txt simples, use (%s)
    
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);    // Para INT, use (%d)
    
    printf("\nDigite sua altura (ex. 1.80): ");
    scanf("%f", &altura);   // Para FLOAT, use (%f)

    printf("\nDigite o valor da PRIMEIRA compra: ");
    scanf("%f", &ultimasCompras[0]); // Posição 0 do vetor

    printf("\nDigite o valor da SEGUNDA compra: ");
    scanf("%f", &ultimasCompras[1]); // Posição 1 do vetor

    printf("\nDigite o valor da TERCEIRA compra: ");
    scanf("%f", &ultimasCompras[2]); // Posição 2 do vetor

    // 4. Executa a função:
    showUsuario(
        nome, 
        idade, 
        saldo, 
        altura, 
        ultimasCompras);
}