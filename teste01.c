#include <stdio.h>
#include <math.h>

struct livro
{
    int ano;
    char nome[500], autor[100];
    int pag;
};
int main(){
    struct livro livro1 ={"Homem", "Leticia", 2005, 500};
    struct livro livro2 ={"Dois", "Leticia", 2005, 800};
    struct livro livro3 ={"Poeira", "Leticia", 2005, 320};
    struct livro livro4 ={"Volta","Leticia", 2005, 550};
    struct livro livro5 ={"Cachorro","Leticia", 2005, 600};

int x;
int soma =0, media =0;

printf("Bem-vindo á sua biblioteca de livros! Se desejar ver os livros que você possui: digite 1.se desejar adicionar um novo livro digite 2 e se desejar ver a media de páginas digite 3:");
scanf("%d", &x);

switch (x)
{
case 1:
  if (x==1)
  {
printf("Aqui estão seus livros!\n\n");

printf("Informacoes do livro 01\n:");
printf("Nome: %s\n", livro1.nome);
printf("Autor: %s\n", livro1.autor);
printf("Ano de publicacao: %d\n", livro1.ano);
printf("Numero de paginas: %d\n", livro1.pag);

printf("Informacoes do livro 02\n:");
printf("Nome: %s\n", livro2.nome);
printf("Autor: %s\n", livro2.autor);
printf("Ano de publicação: %d\n", livro2.ano);
printf("Numero de páginas: %d\n", livro2.pag);

printf("Informações do livro 03\n:");
printf("Nome: %s\n", livro3.nome);
printf("Autor: %s\n", livro3.autor);
printf("Ano de publicacao: %d\n", livro3.ano);
printf("Numero de paginas: %d\n", livro3.pag);

printf("Informacoes do livro 04\n:");
printf("Nome: %s\n", livro4.nome);
printf("Autor: %s\n", livro4.autor);
printf("Ano de publicacao: %d\n", livro4.ano);
printf("Numero de paginas: %d\n", livro4.pag);

printf("Informações do livro 05\n:");
printf("Nome: %s\n", livro5.nome);
printf("Autor: %s\n", livro5.autor);
printf("Ano de publicacao: %d\n", livro5.ano);
printf("Numero de paginas: %d\n", livro5.pag);

printf("Bem-vindo á sua biblioteca de livros! Se desejar adicionar um novo livro digite 2 e se desejar ver a media de páginas digite 3:");
scanf("%d", &x);
  }
  
    break;
case 2:
if (x==2)
{
  
  printf("Adicionando um novo livro a biblioteca:\n");

   struct livro livro; 
printf("Digite o nome do livro:\n");
scanf("%49s", livro.nome);
printf("Digite o autor do livro:\n");
scanf("%49s", livro.autor);
printf("Digite o ano que foi publicado o livro:\n");
scanf("%d", livro.ano);
printf("Digite quantas paginas possui o livro\n:");
scanf("%d", livro.pag);

printf("Informacoes do livro\n:");

printf("Nome: %s\n", livro.nome);
printf("Autor: %s\n", livro.autor);
printf("Ano de publicacao: %d\n", livro.ano);
printf("Numero de paginas: %d\n", livro.pag);
printf("Bem-vindo á sua biblioteca de livros! Se desejar ver a media de páginas digite 3:");
scanf("%d", &x);
}

 break;
case 3:
if (x==3)
{
soma = livro1.pag+livro2.pag+livro3.pag+livro4.pag+livro5.pag;

printf("A quantidade de páginas no total é de :\n %d", soma);
printf("A media de paginas e de:%f", soma/5);
}
break;

case 4:
if (x<1)
{
    printf("Digite um numero valido por favor!\n");
}
break;

default:
if (x>3)
{
printf("Digite um numero valido por favor!\n");
}

    break;
}




return 0;

}