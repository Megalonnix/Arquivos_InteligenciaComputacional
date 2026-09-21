/*
    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    >>>>>>>>>> TEMA AULA/TREINO: <<<<<<<<<<
    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    1. Tentando entender melhor as nuances
    de como o C interpreta comandos ligados
    a endereços de memória, como scanf()
    e o printf().
*/


# include <stdio.h>

int main() {
    int x = 1000;

    printf("=== 1. O QUE E O '&' (ENDERECO) ===\n\n");
    // 'x' é o VALOR dentro da caixa.
    // '&x' é a LOCALIZAÇÃO  (endereço) da caixa na memoria RAM.
    printf("Valor de x: %d\n", x);
    printf("Endereco de 'x' na MEMORIA: %p\n\n", &x); // (%p) é de POINTER
                                                      // ele servirá p/ mostrar o endereço de memoria
                                                      // hexadecimal ao invés do valor bruto.

    // O scanf precisa saber ONDE salvar o dado, por isso
    // passamos &x. Se passásemos apenas 'x', o scanf receberia 
    // o número 10 e tentaria gravar  no endereço de memória 10!!!
    // (o que causaria um  CRASH/trava) :P
    printf("=== 2. PASSANDO O '&' PARA ALTERAR VALORES (SCANF) ===\n\n");
    printf("Digite um novo valor para x: ");
    scanf("%d",&x);

    printf("Novo valor de x: %d \n", x);    // %d espera do output um NÚMERO INTEIRO, 
                                            // caso vc adicione &+x (&x) o output será um endereço aleatório!

    printf("O endereco continua sendo o mesmo: %p", &x);

    printf("\n\n=== 3. INTRODUCAO A PONTEIROS (VARIAVEL QUE GUARDA ENDERECO) ===\n\n");
    // Um ponteiro 'ptr' guarda o endereço retornado pelo '&'
    int *ponteiro1 = &x;
    printf("Valor de endereco do PONTEIRO1 (que e o endereco de x):\n");
    printf("\nValor PONTEIRO1: %p", ponteiro1);
    printf("\nValor ONDE o PONTEIRO1 aponta (usando *ponteiro1): %d \n", *ponteiro1);
}