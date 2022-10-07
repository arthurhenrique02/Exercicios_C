/*16) Dados um número natural n, exiba seu fatorial n!. (0,1)
*/

#include <stdio.h>

int main(void)
{
    // definir variaveis
    int num, fat = 1;

    // solicitar num
    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    // calcular fatorial
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }
    printf("O fatorial do número %i é: %i\n", num, fat);
}