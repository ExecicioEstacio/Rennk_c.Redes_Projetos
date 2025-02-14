#include <stdio.h>

int main(){
    int indade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "bruno";

    printf("idade: %d anos\n", indade);
    printf("altura: %.2f metros\n", altura);
    printf("saldo Bancario: %.2f reais\n", saldoBancario);
    printf("inicial do nome: %c\n", inicial); 
    printf("nome: %s\n", nome);
    
    return 0;
}