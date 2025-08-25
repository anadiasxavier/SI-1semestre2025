#include <stdio.h>

int main()
{   
    //AQUI DECLARA AS VARIAVEIS
    int numAlunos;
    float media1, media2;
    float nota1[300], nota2[300], sub[300], media[300];
    
    unsigned int RA [100];
    
    printf("Bem-vindo ao programa de calcular média do aluno!");
    
    //SALVA QUANTIDADE DE ALUNOS
    printf("\nQual é a quantidade de alunos que deseja calcular a média: ");
    scanf("%d", &numAlunos);
    
    
    //LAÇO DE REPETIÇÃO PARA PERGUNTAR O RA E PERGUNTAR AS NOTAS
    for ( int i = 0; i < numAlunos; i++){
        printf("\nDigite o RA do aluno: ");
        scanf("%u", &RA[i]);
        
        //NOTA 1
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1[i]);
        
        //NOTA2
        printf("\nDigite a segunda nota: ");
        scanf("%f", &nota2[i]);
        
        //SUB
        printf("\nDigite a nota da sua sub, se nao tiver, digite -1: ");
        scanf("%f", &sub[i]);
        
        //CALCULO DE MEDIA
        if(sub[i] == -1){
            media[i] = nota1[i] + nota2[i]/ 2.0;
        } else {
            float mediasubNota1 = (sub[i] +2*nota2[i])/3.0;
            float mediasubNota2 =  (nota1[i] +2*sub[i])/3.0;
            media[i] = (mediasubNota1 > mediasubNota2) ? mediasubNota1 : mediasubNota2;
        }
        
    }
    
     printf("\nMedia final: \n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d (RA: %u) -> Média Final = %.2f\n", i + 1, RA[i], media[i]);
    }
  
    
    return 0;
    
}