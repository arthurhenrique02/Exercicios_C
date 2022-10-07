/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
2=1+3+5+7, etc. Dado um número n,
calcule seu quadrado usando a soma de ímpares ao invés de produto. (0,1)
*/

#include <stdio.h>

int main(void)
{
    // definir variável
    int num, soma = 0, impar = - 1;

    // solicitar número
    printf("Digite um número: ");
    scanf("%i", &num);

    // somando numeros impares antes do numero digitado
    for (int i = 0; i < num; i++)
    {
            // incrementando 2 para a variavel 'impar' para somar um novo numero impar a cada loop
            impar += 2;
            // somando os numeros impares em uma variável
            soma += impar;
    }

    // mostrando na tela
    printf("%i² = %i\n", num, soma);

    return 0;
}