# include <stdio.h>

int main() {

    int var1 = 1;

    printf("\n=== TESTE COM (var1): === \n\n");
    printf("1) Imprime o valor em base decimal:\n");
    printf("var1 = %d", var1);
    printf("\n");
    printf("2) Imprime o endereco do valor ~FORCADO~ a ser decimal:\n");
    printf("*NOTA: gracas ao protocolo de seguranca ASLR do C\nesse numero maluco e randomico! Veja:\n");
    printf("%d", &var1);
    printf("\n");
    printf("3) Dessa vez foi o oposto, o valor '1' foi ~FORCADO~ a ser formatado como Hexadecimal\npadrao de ponteiros reais! Veja:\n");
    printf("%p", var1);
    printf("\n");
    printf("4) Finalmente imprimimos um endereco de memoria, o qual naturalmente e\nesperado ser impresso em hexadecimal:\n");
    printf("%p", &var1);
    printf("\n\n");
}