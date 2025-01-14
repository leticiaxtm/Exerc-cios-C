#include <stdio.h>
int main(){
int vet [10];
int i, j, auxiliar; 



for(i=0;i<10;i++){
printf("Digite os valores do vetor:\n");
scanf("%d", &vet[i]);
}
printf("\n Vetor Desordenado\n");
for(i=0;i<10;i++){
printf("%d", vet[i]);
}

for(i=0;i<10;i++){
 for(j=i;j<10;j++) {
 	if(vet[j]<vet[i]) {
 	 auxiliar=vet[j];
	  vet[j]=vet[i];
	  vet[i]=auxiliar;	
 		
  }
 }	
}

	printf("\n Vetor Ordenado:\n");
	
	for(i=0;i<10;i++) 
{
		printf("%d", vet[i]);
}
	return 0;
}


