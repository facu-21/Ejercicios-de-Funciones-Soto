#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	char n[1];
	int a,c,i,n1,n2,n3,n4,n5,n6;
	printf("Ingrese un numero de 6 digitos: ");
	for(i=1;i<=7;i++){
		if(i==1){
			n1=getch();
		}
		if(i==2){
			n2=getch();
		}
		if(i==3){
			n3=getch();
		}
		if(i==4){
			n4=getch();
		}
		if(i==5){
			n5=getch();
		}
		if(i==6){
			n6=getch();
		}
		printf("*");
		
	}
	printf("\n¿Desea ver el numero escrito? (S/N): ");
	scanf("%c",&n);
	if(n[0]=='S'){
		n1=n1-48;
		n2=n2-48;
		n3=n3-48;
		n4=n4-48;
		n5=n5-48;
		n6=n6-48;
		printf("Su numero es %d",n1);
		printf("%d",n2);
		printf("%d",n3);
		printf("%d",n4);
		printf("%d",n5);
		printf("%d\n",n6);
	}
	system("pause");
	return 0;
}
