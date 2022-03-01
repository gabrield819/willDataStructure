#include <stdio.h>

int main(int argc, char** argv){
    float nota[10], media;
    int i, qtdProvas;
    float soma = 0; 
   
    printf("Informe a quantidade de provas: ");
    scanf("%i",&qtdProvas);
    
    //obtendo as notas dos alunos
    for ( i= 1; i<=qtdProvas; i++){
      printf("Informe a nota do aluno %i; ",i);
      scanf("%f",&nota[i]);
      // calcular a média...
      soma = soma+nota[i];
      
    }
    printf(" \n A soma das notas é: %",soma);
    
    //printf(" quantidade de provas: %i:", qtdProvas);
}