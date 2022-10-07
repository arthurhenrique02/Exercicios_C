/*3) Escreva um programa que leia um número na base decimal e em seguida imprima esse
mesmo número nas bases octal e hexadecimal. (0,1)*/


#include <stdio.h>

int main(void)
{
    // definir varáveis
    int num;

    // solicitar número
    printf("Digite um número: ");
    scanf("%i", &num);

    // converter para hexadecimal e octal e mostrar na tela
    printf("=====================================\n");
    printf("Número digitao: %i\nConvertido para hexadecimal: %X\nConvertido para octal: %o\n", num, num, num);
    printf("=====================================\n");

}