#include <stdio.h>


int main() {
    char nome[50];
    float nota, soma;
    int quantidade;
    char opcao;
    
    do {
      printf("Digite o nome do aluno: ");
      scanf("%s", nome);
      
      soma = 0;
      quantidade = 0;

      do {
        printf("Digite a nota do aluno %s: ", nome);
        scanf("%f", &nota);

        soma += nota;
        quantidade++;

        printf("Deseja digitar outra nota para o aluno %s? (S/N): ", nome);
        scanf(" %c", &opcao );
      } while (opcao == 'S' || opcao == 's');

      float media = soma / quantidade;

      printf("A media do aluno %s é: %.2f\n\n", nome, media);


      printf("Deseja adicionar notas para outro aluno? (S/N): ");
      scanf(" %c", &opcao);
      printf("\n");

    } while (opcao == 'S' || opcao == 's');
    
    return 0;
}
