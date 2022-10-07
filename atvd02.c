/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin: (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variáveis
    float fahr, celcius, kelvin;

    // solicitar temperatura em ºF
    printf("Digite a temperatura em ºF: ");
    scanf("%f", &fahr);

    // calculo de converção para ºC e K
    celcius = (fahr - 32.0) * 5.0 / 9.0;
    kelvin = (fahr - 32.0) * 5.0 / 9.0 + 273.15;

    // mostrar na tela
    printf("%2.f ºF covertido para ºC é: %2.f ºC\n", fahr, celcius);
    printf("%2.f ºF covertido para K é: %.2f K\n", fahr, kelvin);
}