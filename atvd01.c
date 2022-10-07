/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número. (0,1)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // definir variáveis
    int quant_nums = 2;
    int numeros[2];

    // solicitar e armazenar o número
    for(int i = 0; i < quant_nums; i++)
    {
        printf("Digite um número: ");
        scanf("%i", &numeros[i]);
    }

    // calcular quadrados
    float quad_num1 = pow(numeros[0], 2);
    float quad_num2 = pow(numeros[1], 2);


    // exibir resultados
    printf("========================================");
    printf("\nNúmeros digitados: %i e %i\n\n", numeros[0], numeros[1]);
    printf("%i + %i = %i\n", numeros[0], numeros[1], (numeros[0] + numeros[1]));
    printf("%i * %i² = %.2f\n", numeros[0], numeros[1], (float) numeros[0] * quad_num2);
    printf("%i² = %.2f\n", numeros[0], quad_num1);
    printf("raiz²(%i² + %i²) = %.2f\n", numeros[0], numeros[1], sqrt(quad_num1 + quad_num2));
    printf("seno(%i - %i) = %.2f\n", numeros[0], numeros[1], sin(numeros[0] - numeros[1]));
    printf("|%i| = %d\n", numeros[0], abs(numeros[0]));

    return 0;
}

