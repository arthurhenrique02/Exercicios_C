/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?". (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variável
    float val_produto;

    // solicitar o valor e armazenar
    printf("Digite o valor do produto: R$");
    scanf("%f", &val_produto);

    while (val_produto < 100.00 && val_produto > 0)
    {
        float acrescimo = val_produto * 0.1;
        printf("Valor do produto: %.2f\nAcrescimo de 10%%: %.2f\nNovo valor: %.2f\n", val_produto, acrescimo, (val_produto + acrescimo));

        return 0;
    }

    while (val_produto >= 100.00)
    {
        float acrescimo = val_produto * 0.2;
        printf("Valor do produto: %.2f\nAcrescimo de 20%%: %.2f\nNovo valor: %.2f\n", val_produto, acrescimo, (val_produto + acrescimo));

        return 0;
    }

    // caso nenhum seja verdade
    printf("Digite um valor válido para o produto!!\n");

    return 0;
}