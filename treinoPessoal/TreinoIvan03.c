#include <stdio.h>

int main() {
    int idade = 0;

    printf("=== SISTEMA DE ACESSO ===\n");
    printf("Digite sua idade: ");
    
    // CORRIGIDO: Usamos %d porque 'idade' é um inteiro (4 bytes).
    // Passamos &idade para o scanf saber em qual endereço de memória 
    // salvar o valor. (Usar %p aqui faria o scanf tentar escrever 
    // 8 bytes de um ponteiro em um int de 4 bytes).
    scanf("%d", &idade); 
    
    // 1) Imprime o valor inteiro bruto armazenado na variável
    printf("Valor em DECIMAL: %d\n", idade); 
    
    // 2) Pega o valor contido em 'idade' (ex: 1) e o formata no 
    // padrão hexadecimal de ponteiros (16 dígitos)
    printf("Valor formatado em HEXA (padrao PONTEIROS): %p\n", idade); 
    
    // 3) CORRIGIDO: Fazemos o 'cast' explícito (float)idade.
    // Isso converte a representação de bits do int para a representação 
    // decimal (IEEE-754) antes de passar ao printf. Sem o '(float)', 
    // o %f interpretaria os bits do int como float, resultando em 0.000000.
    printf("A) Valor convertido em FLOAT\nvia Casting: %f\n", (float)idade);

    // Em A (1.000000): O (float)idade converteu a estrutura interna de bits. 
    // O C pegou o valor 1 de inteiro (0x00000001) e reescreveu nos bits do padrão IEEE-754 (0x3F800000). 
    // O %f leu esses bits novos e entendeu como 1.0.

    printf("B) QTD bits do espaco destinado ao INT\ninterpretado como FLOAT: %f\n", idade);

    // Em B (0.000000): Sem o cast, você passou os bits brutos do int (0x00000001) e mandou 
    // o %f lê-los como se fossem float. Como essa sequência de bits representa um número 
    // decimal infinitamente próximo de zero, a máscara %f arredondou para 0.000000.
    
    // 4) Imprime novamente o valor inteiro mantido na variável
    printf("Valor em DECIMAL mantido: %d\n", idade); 

    return 0;
}