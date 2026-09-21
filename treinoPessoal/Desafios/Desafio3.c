/*
    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    >>>>>>>>>> DESAFIO PARA TREINO: <<<<<<<<<<
    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    DESAFIO 3: Cálculadora básica.
    Obrigatorio:
    - 1. Função PROTÓTIPO
    - 1.1. func. prot. SEM RETORNO
    - 1.2. func. prot. COM RETORNO
*/

# include <stdio.h>
# include <stdbool.h> // Biblioteca p/ usar boo, true e false. 

void run_calculadora(void);
void show_resp_op(
    const float valores[2],
    const char simbOp, 
    const float result);

float somar(float n1, float n2) { return (n1 + n2); }
float subtrair (float n1, float n2) { return (n1 - n2); }
float dividir (float n1, float n2) { return (n1 / n2); }
float multiplicar (float n1, float n2) { return (n1 * n2); }

int main() {
    bool on = true;
    int opcao;

    printf("Deseja ligar o programa?\n");
    printf("[1] - Sim\n");
    printf("[2] - Nao\n");
    printf("Digite a resposta: ");
    
    scanf("%d", &opcao);

    while (on == true) {
        printf("Opcao digitada = %d \n", opcao);

        if (opcao == 1) {
            run_calculadora();
            printf("\nTarefa finalizada... \n");
            on = false;
        }
        else {  
            printf("\nSair do programa... \n");
            on = false; 
        }
    }
    printf("Calculadora desligada...");
}

void show_resp_op(
    const float valores[2], 
    const char simbOp,
    const float result
) {
    printf(
        "Resultado de (%.2f %c %.2f) = %.2f", 
        valores[0], simbOp, valores[1], result);
}

void run_calculadora(void) {
    printf("\n==== CALCULADORA BASICA ====\n");
    printf("Digite a operacao desejada: \n");
    
    printf("[1] Somar\n");
    printf("[2] Subtrair\n");
    printf("[3] Dividir\n");
    printf("[4] Multiplicar\n");
    printf("Opcao digitada: ");

    int opcao = 0;
    scanf("%d", &opcao);

    if (opcao > 0 && opcao < 5) 
    {
        float nDigit1 = 0.0, nDigit2 = 0.0;
        printf("\nValor 1: ");
        scanf("%f", &nDigit1);
        printf("\nValor 2: ");
        scanf("%f", &nDigit2);
        float valores[2] = { nDigit1, nDigit2 };

        switch (opcao) {
            case 1:
                float r1 = somar(valores[0], valores[1]);
                show_resp_op(valores, '+', r1);
                break;
            case 2:
                float r2 = subtrair(valores[0], valores[1]);
                show_resp_op(valores, '-', r2);
                break;
            case 3:
                float r3 = dividir(valores[0], valores[1]);
                show_resp_op(valores, '/', r3);
                break;
            case 4:
                float r4 = multiplicar(valores[0], valores[1]);
                show_resp_op(valores, '*', r4);
                break;
            default:
                break;
        } 
    }
}