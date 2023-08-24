#include <stdlib.h>
#include <stdio.h>

void as(int n){
	printf("El simbolo correspondiente de la ascii es: %c\n",n);
}
int main(){
	int n;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	as(n);
	system("pause");
	return 0;
}
