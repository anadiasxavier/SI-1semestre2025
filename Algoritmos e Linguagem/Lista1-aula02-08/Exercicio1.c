#include <stdio.h>

// CALCULAR PERIMETRO DO RETÂNGULO 
int main(){
    float base, altura, pertimetro;

    printf("Programa para calcular perimetro de retângulo. \n\n");

    printf("Digite em cm a base: ");
    scanf("%f", &base);

    printf("Digite em cm a altura: ");
    scanf("%f", &altura);

    perimetro = 2*base + 2*altura;

    printf("\nO perimetro do retangulo com base %.1fcm e com altura %1.fcm vale %1.fcm \n\n", base, altura, perimetro);

    printf("\nPrograma encerrado!\n");
    return 0;
}