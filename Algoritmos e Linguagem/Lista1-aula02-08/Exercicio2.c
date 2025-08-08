#include <stdio.h>

// CALCULAR PERIMETRO DO TRIANGULO
int main(){
    float lado1, lado2, lado3, pertimetro;

    printf("Programa para calcular perimetro do triângulo. \n\n");

    printf("Digite em cm o primeiro lado do seu triângulo:  ");
    scanf("%f", &lado1);

    printf("Digite em cm o segundo lado do seu triângulo:  ");
    scanf("%f", &alado2);

    printf("Digite em cm o terceiro lado do seu triângulo:  ");
    scanf("%f", &alado3);

    perimetro = lado1 + lado2 + lado3;

    printf("\nO perimetro do seu triângulo é  %1.fcm \n\n", perimetro);

    printf("\nPrograma encerrado!\n");
    return 0;
}