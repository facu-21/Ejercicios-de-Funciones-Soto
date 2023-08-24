#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mul(int a,int b){
	int i,n;
	n=a;
	for(i=1;i<=b;i++){
		a=a+n;
	}
	return a-n;
}

int divi(int a,int b){
	int i,n;
	n=0;
	for(i=b;i<=a;i=i+b){
		n=n+1;
	}
	return n;
}
	
int main() {
	int a,b;
	char d[1];
	printf("¿Desea multiplicar o dividir? (M/D): ");
	scanf("%s",&d);
	if(strcmp(d,"M")==0){
		printf("Ingrese un factor: ");
		scanf("%d",&a);
		printf("Ingrese otro factor: ");
		scanf("%d",&b);
		b=mul(a,b);
		printf("El producto de la multiplicacion es %d\n",b);
	}
	if(strcmp(d,"D")==0){
		printf("Ingrese dividendo: ");
		scanf("%d",&a);
		printf("Ingrese divisor: ");
		scanf("%d",&b);
		b=divi(a,b);
		printf("El cociente de la division es %d\n",b);
	}
	system("pause");
	return 0;
}
