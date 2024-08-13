#include <stdio.h>
int main (){
	int numero;
	printf("Digite um numero\n");
	scanf("%d",&numero);
	if(numero%3==0){
		if(numero%7==0){
			printf("O numero %d e divisivel por 3 e por 7",numero);
		} 
	}
	else printf("Nao e div. por 3 e 7");
return 0;
}
