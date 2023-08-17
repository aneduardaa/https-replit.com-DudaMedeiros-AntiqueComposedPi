#include <stdio.h> <stdin.h>

int main() {
char nome [15];
  int idade = 10;
  char endereco [10];
  char curso [10];
  char periodo [18];
  int disciplinas = 15;
  float mensalidade = 10;
  //Dados do Cadastro
  //Nome: Larissa silva, 19 anos, Brasilia, Medicina, Quinto periodo, 15 disciplinas, 10.500
  
  printf(":Nome:\n", nome);
  fgets(nome,15,stdin);
system("pause");
  
  printf("Idade:\n");
  scanf("%d", &idade);
  
  printf("Endereço:\n");
  fgets(endereco,10,stdin);
  scanf("%s",&endereco);
  
  printf("Curso:\n");
  fgets(curso,10,stdin);
  scanf("%s", &curso);

  printf("Qual o Periodo?:\n");
  fgets(periodo,18,stdin);
  scanf("%s", &periodo);

  printf("Quantas disciplinas possuem o curso:\n");
  scanf("%d", &disciplinas);

  printf("Qual o valor da mensalidade?\n");
  scanf("%f", mensalidade);

  printf("Obrigada por concluir o cadastro:)");
  
  return 0;
}