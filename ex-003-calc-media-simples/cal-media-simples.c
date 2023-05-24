#include <stdio.h>


int main(){
  int n1,n2,n3;
  float media;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  media = (n1 + n2 + n3) / 3.0;

  printf("Sua média é: %.2f \n", media);


  return 0;
}
