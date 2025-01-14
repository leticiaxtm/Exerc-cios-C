#include <stdio.h>
#include <math.h>

struct contato
{
char nome[50];
int numero[50];
};

int main(){
    struct contato pessoa1 ={"Marcos", 61919083697};
    struct contato pessoa2 ={"Eloisa", 61671546457};
    struct contato pessoa3 ={"Linda", 61803752660};
    struct contato pessoa4 ={"Saulo", 61813380639};
    struct contato pessoa5 ={"Leticia", 61546694414};
    struct contato pessoa6 ={"Otavio", 61566940890};
    struct contato pessoa7 ={"Victor", 61875185445};
    struct contato pessoa8 ={"Michel", 61949270748};
    struct contato pessoa9 ={"Erick", 61132477628};
    struct contato pessoa10 ={"Pedro", 61912668403};

    int contato;
    printf("Digite um numero de 1 ate 10 para mostrar o seu respectivo contato:\n");
    scanf("%d", &contato);

switch (contato)
{
case 1:
printf("Nome:%s", pessoa1.nome);
printf("Numero:%d", pessoa1.numero);

    break;
case 2:
printf("Nome:%s.\n", pessoa2.nome);
printf("Numero:%d.\n", pessoa2.numero);  
    break;
case 3:
printf("Nome:%s.\n", pessoa3.nome);
printf("Numero:%d.\n", pessoa3.numero);  
    break;
case 4:
printf("Nome:%s.\n", pessoa4.nome);
printf("Numero:%d.\n", pessoa4.numero);  
    break;
 case 5:
printf("Nome:%s.\n", pessoa5.nome);
printf("Numero:%d.\n", pessoa5.numero);  
    break;  
case 6:
printf("Nome:%s.\n", pessoa6.nome);
printf("Numero:%d.\n", pessoa6.numero);  
    break; 
case 7:
printf("Nome:%s.\n", pessoa7.nome);
printf("Numero:%d.\n", pessoa7.numero);  
    break;
case 8:
printf("Nome:%s.\n", pessoa8.nome);
printf("Numero:%d.\n", pessoa8.numero);  
    break;
case 9:
printf("Nome:%s.\n", pessoa9.nome);
printf("Numero:%d.\n", pessoa9.numero);  
    break;   
case 10:
printf("Nome:%s.\n", pessoa10.nome);
printf("Numero:%d.\n", pessoa10.numero);  
    break;

default:
printf("Digite um numero valido por favor!");
    break;
}
}




