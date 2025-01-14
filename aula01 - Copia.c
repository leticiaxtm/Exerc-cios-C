#include <stdio.h>
int main(){
FILE *arq;
char nome[10];
char c;
arq = fopen("arq.txt","w");
if (arq)
{
   printf("Digite um nome ou 0 para sair:\n");
   fgets(nome, 10, stdin);
   while(nome[0] != '0'){
    fputs(nome, arq);
    printf("Digite um nome ou 0 para sair:\n");
    fgets(nome, 10, stdin);
   } /* code */
}else{
    printf("Arquivo não existe");
}

fclose(arq);
arq = fopen("arq.txt","r");

if(arq){
while((c = getc(arq)) !=EOF){// o C vai pegar o arquivo enquanto nao for o  fim do arquivo e vai formar uma palavra
 printf("%c", c);
}
}else{
    printf("Arquivo não existe");
};


fclose(arq);
return 0;

}
