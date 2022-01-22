#include <stdio.h>
#include <stdlib.h>
#define MAX 100000000

struct aluno
{
  int mat;
  char nome[81];
  char turma[50];
  float n1, n2, n3, media;

};

typedef struct aluno Aluno;

void inicializa(int n, Aluno **tab)
{
  int i;
  for (i = 0; i < n; i++)
    tab[i] = NULL;
}

 void preenche(int n, Aluno **tab, int i){

    if (i < 0 || i >=n)
  {
    printf("Indice fora do limite do vetor\n");
    exit(1);
  }
   if (tab[i] >= NULL)
    tab[i] = (Aluno *)malloc(sizeof(Aluno));
   printf("\nINSIRA SEUS DADOS A SEGUIR: \n");
  printf("\n\nEntre com a matricula: ");
  scanf("%d", &tab[i]->mat);

  printf("Entre com o nome: ");
  scanf("%s", tab[i]->nome);

  printf("Entre com a turma: ");
  scanf("%s", tab[i]->turma);

  printf("\n");

  printf("Digite a nota 1: ");
  scanf("%f", &tab[i]->n1);

  printf("Digite a nota 2: ");
  scanf("%f", &tab[i]->n2);

  printf("Digite a nota 3: ");
  scanf("%f", &tab[i]->n3);
   printf("\n");

  printf("Aluno inserido com sucesso!!\n");
  printf("\n");

 }

void imprime_aluno(int n, Aluno **tab, int i)
{
  if (i < 0 || i >= n)
  {
    printf("Indice fora do limite do vetor\n");
    exit(1);
  }

  if (tab[i] != NULL)
  { float media = (tab[i]->n1 + tab[i]->n2 + tab[i]->n3) / 3;
    printf("####################");
    printf("\n#Dados do aluno %d\n", i + 1);
    printf("\nStatus: Aprovado(a) com sucesso!");
    printf("\nNome do aluno: %s\n", tab[i]->nome);
    printf("Matricula do aluno: %d\n", tab[i]->mat);
    printf("Turma do aluno: %s\n", tab[i]->turma);
    printf("Media do aluno igual a: %.f", media);
    printf("\n####################");
  }
}



//criando função q imprime  o número de matrícula,
// o nome, a turma e a média de todos os alunos aprovados na disciplina.
//no caso só pode imprimir os alunos q tem a media maior q 7

void imprime_aprovados(int n, Aluno** tab){
    float n1, n2, n3;
    int i;


    for(int i = 0; i < n; i++){
     if ((tab[i]->n1 + tab[i]->n2 + tab[i]->n3) / 3 >= 7){
        imprime_aluno(n, tab, i);
     }

}}
int main()
{
  system("cls");
  Aluno *tab[10];
  inicializa(10, tab);
  preenche(10, tab, 0);
  preenche(10, tab, 1);
   preenche(10, tab, 2);
   preenche(10, tab, 3);

  imprime_aprovados(10, tab);

    return 0;
  ;
}
