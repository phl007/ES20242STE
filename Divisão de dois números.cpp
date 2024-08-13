#include <stdio.h>
int main (){
	int x,y;
	printf ("Digite dois numeros tal que x/y\n");
	scanf ("%d%d",&x,&y);
	if(y!=0) printf ("x=%d/y=%d e %.2f",x,y, (float)(x/y));
	else printf ("O valor de y deve ser diferente de 0");
	
	return 0;
}
