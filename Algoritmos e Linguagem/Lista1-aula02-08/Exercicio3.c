#include <stdio.h>

// CALCULAR AREA DO RETANGULO
int main(){
    float base, altura, area;

    printf("Programa para calcular area do retângulo. \n\n");

    printf("Digite em cm a base: ");
    scanf("%f", &base);

    printf("Digite em cm a altura: ");
    scanf("%f", &altura);


    area = base * altura;

    printf("\nA area do seu retangulo é  %1.fcm \n\n", area);

    printf("\nPrograma encerrado!\n");
    return 0;
}