#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int prom(float n1,float n2, float n3,float n4){
	float p;
	p=(n1+n2+n3+n4)/4;
	if(p<=10 && p>=9){
		return 4;
	}
	if(p<=8 && p>=7){
		return 3;
	}
	if(p<7 && p>=6){
		return 2;
	}
	if(p<6 && p>=5){
		return 1;
	}
	if(p<5){
		return 0;
	}
}

int main() {
	float n1,n2,n3,n4;
	int p;
	printf("Ingrese nota numero 1: ");
	scanf("%f",&n1);
	printf("Ingrese nota numero 2: ");
	scanf("%f",&n2);
	printf("Ingrese nota numero 3: ");
	scanf("%f",&n3);
	printf("Ingrese nota numero 4: ");
	scanf("%f",&n4);
	p=prom(n1,n2,n3,n4);
	printf("%d\n",p);
	system("pause");
	return 0;
}
