# include <stdio.h>

/*
    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    >>>>>>>>>> DESAFIO PARA TREINO: <<<<<<<<<<
    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    DESAFIO 1: Troca de Valores: Declare duas 
    variáveis a = 5 e b = 10. Crie uma lógica 
    para trocar os valores entre elas para que 
    a passe a valer 10 e b valer 5. Imprima 
    os valores finais. USE PONTEIROS.
*/

int main() {
    
    int vl1 = 0;
    int vl2 = 0;

    printf("Digite vl1: ");
    scanf("%d", &vl1);

    printf("Digite vl2: ");
    scanf("%d", &vl2);

    printf("\n[vl1] = %d | [vl2] = %d", vl1, vl2);

    printf("\n\n=== TROCAR VALORES: ===\n\n");
    printf("=== [vl1] <-> [vl2] ===\n\n");

    int *pont_vl1 = &vl1;
    int *pont_vl2 = &vl2;
    int aux = 0;

    aux = *pont_vl1;
    vl1 = *pont_vl2;
    vl2 = aux;

    printf("[vl1] = %d | [vl2] = %d \n\n", vl1, vl2);

    return 0;
}