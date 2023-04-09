#include<stdio.h>

int main(){
    // Declaração de Variaveis
    float temperatura_celsius, temperatura_fahrenheit;
    
    temperatura_celsius = 0;
    temperatura_fahrenheit = 0;

    //Entradas
    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);

    //Processamento
    temperatura_celsius = (temperatura_fahrenheit - 32) * 5 / 9;
    
    // saida
    printf("\n\n\nHoje esta fazendo %0.2f graus celsius!\n\n\n", temperatura_celsius);

    return 0;
}