#include <stdio.h>
#include <stdlib.h>

void prom(float n1,float n2,float n3){
	n1=(n1+n2+n3)/3;
	printf("El promedio de los numeros es: %.2f\n",n1);
}
	
int main(){
	float n1,n2,n3;
	printf("Ingrese un numero: ");
	scanf("%f",&n1);
	printf("Ingrese otro numero: ");
	scanf("%f",&n2);
	printf("Ingrese otro numero: ");
	scanf("%f",&n3);
	prom(n1,n2,n3);
	system("pause");
	return 0;
}
