#include <stdio.h>
int main (){
	int l1,l2,l3;
	printf("Digite tres numeros inteiros\n");
	scanf("%d%d%d",&l1,&l2,&l3);
	l1=l1*l1;
	l2=l2*l2;
	l3=l3*l3;
	if(l1==l2+l3||l2==l1+l3||l3==l2+l1){
		printf("E um triangulo retangulo");
	} else {
		printf("Nao e um traingulo retangulo");
	}
	return 0;
}

	
