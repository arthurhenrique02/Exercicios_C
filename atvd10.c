/*10) Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50. (0,1)
*/

#include <stdio.h>

void par_impar(int x);

int main(void)
{
    // definir variavel
    int num;

    // solicitar e armazenar numero
    printf("Digite um número para saber se é par ou impar: ");
    scanf("%d", &num);

    // ver se é par ou impar
    par_impar(num);

    return 0;
}


void par_impar(int x)
{
    if ((x % 2) != 0)
    {
        printf("%i é um número ímpar", x);

        // verificar se é menor que 50
        if (x < 50)
        {
            printf(" menor que 50\n");
            return;
        }

        // mostrar que é maior que 50 por padrão
        printf(" maior que 50\n");
        return;
    }

    printf("%i é um número par", x);

    // verificar se é menor que 15
    if (x < 15)
    {
        printf(" menor que 15\n");
        return;
    }

    // mostrar que é maior que 15 por padrão
    printf(" maior que 15\n");
    return;
}