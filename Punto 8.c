#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float dth(float d){
	return d*24;
}
	
float htd(float h){
	return h/24;
}

int main() {
	float h,d;
	char c[1];
	printf("¿Desea ingresar horas o dias? (H/D): ");
	scanf("%s",&c);
	if(strcmp(c,"H")==0){
		printf("Ingrese cantidad de horas: ");
		scanf("%f",&h);
		d=htd(h);
		printf("La cantidad de horas ingresadas son equivalentes a %.2f dias\n",d);
	}
	if(strcmp(c,"D")==0){
		printf("Ingrese cantidad de dias: ");
		scanf("%f",&d);
		h=dth(d);
		printf("La cantidad de dias ingresados son equivalentes a %.2f horas\n",h);
	}
	system("pause");
	return 0;
}
