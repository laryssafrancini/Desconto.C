#include <stdio.h>   // Necessário para printf e scanf

// Definição da struct
struct cliente {
    char nome[50];
    char email[100];
    float totalGasto;
};

int main() {
    struct cliente clienteAtual; 

    printf("Informe seu nome: ");
    scanf("%s", clienteAtual.nome);  // limite para evitar buffer overflow

    printf("Informe seu email: ");
    scanf("%s", clienteAtual.email);

    printf("Informe o total gasto em compras anteriores: R$ ");
    scanf("%f", &clienteAtual.totalGasto);

    float desconto = 0.0;
    if (clienteAtual.totalGasto > 500) {
        desconto = 0.1; // 10% de desconto
    }

    float valorOriginal;
    printf("Informe o valor original da compra: ");
    scanf("%f", &valorOriginal);
    float valorFinal = valorOriginal - (valorOriginal * desconto);


    printf("\nResumo do cliente:\n");
    printf("Total gasto: R$ %.2f\n", clienteAtual.totalGasto);

    printf("Valor original da compra: R$ %.2f\n", valorOriginal);
    printf("Desconto aplicado: %.0f%%\n", desconto * 100);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

     if (desconto > 0) {
        printf("\nParabéns %s! Como cliente especial, você recebeu um desconto de 10%%!\n", clienteAtual.nome);
    } else {
        printf("\nPoxa, não foi possível aplicar o desconto desta vez.\n");
    }

    //printf("Obrigado por comprar conosco!\n Continue aproveitando nossas ofertas.\n");

    return 0;
}






    //printf("Obrigado por comprar conosco.\n");

 //printf("Desconto aplicado: %.0f%%\n", desconto * 100);