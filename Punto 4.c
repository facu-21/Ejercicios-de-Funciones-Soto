#include <stdio.h>
#include <stdlib.h>

float prom(float n1,float n2){
	return (n1+n2)/2;
}

int main() {
	float n1,n2,p;
	printf("Ingrese un numero: ");
	scanf("%f",&n1);
	printf("Ingrese otro numero: ");
	scanf("%f",&n2);
	p=prom(n1,n2);
	printf("La media entre los numeros es %.2f\n",p);
	system("pause");
	return 0;
}
