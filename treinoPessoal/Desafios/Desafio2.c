/*
    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    >>>>>>>>>> DESAFIO PARA TREINO: <<<<<<<<<<
    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    DESAFIO 2: Troca de Valores: Declare duas 
    variáveis a = 5 e b = 10. Crie uma lógica 
    para trocar os valores entre elas para que 
    a passe a valer 10 e b valer 5. Imprima 
    os valores finais. NÃO USE PONTEIROS.
*/

# include <stdio.h>

int main() {
    
    int a = 27;
    int b = 41;
    int aux = 0;

    aux = a;
    a = b;
    b = aux;

    printf("a = %d", a); printf("\n");
    printf("b = %d", b);

    return 0;
}