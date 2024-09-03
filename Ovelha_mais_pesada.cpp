/*i) Entrar com o peso e a identificação de ovelhas. Ao final especifica a ovelha mais pesada e o seu número de identificação e a mais leve e o número de identificação.*/
#include <stdio.h>
#include <stdlib.h>
int main(){					
int n,i,id,leve_id,pesada_id; 
float peso,leve_peso,pesada_peso;	

printf("\n\n\t*** PESAGEM DE OVELHAS ***\n");
printf("\n*Digitar o ID e o Peso...");
printf("\n\n*Quantidade de ovelha a pesar:");
scanf("%d", &n);

printf("\nId ovelha: ");
scanf("%d", &id);
leve_id = id;
pesada_id = id;

printf("Peso ovelha Kg: ");
scanf("%f", &peso);
leve_peso = peso;
pesada_peso = peso;

for (i = 1; i < n; i++) {
	
printf("\nId ovelha: ");
scanf("%d", &id);
printf("Peso ovelha Kg: ");
scanf("%f", &peso);

if (peso < leve_peso) {
leve_id = id;
leve_peso = peso;
}
if (peso > pesada_peso) {
pesada_id = id;
pesada_peso = peso;
 }
}
printf("\n*A mais pesada Id: %.3d \nPeso: %.1f Kg\n", pesada_id, pesada_peso);
printf("\n*A mais leve Id: %.3d\nPeso: %.1f Kg\n", leve_id, leve_peso);

return 0;
}

/*Developed by Julio Gonzales*/
