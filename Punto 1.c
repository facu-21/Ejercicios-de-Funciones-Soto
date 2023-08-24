#include <stdio.h>
#include <stdlib.h>

void name(){
	char n[20];
	char a[20];
	printf("Ingrese su nombre: ");
	scanf("%s",&n);
	printf("Ingrese su apellido: ");
	scanf("%s",&a);
	printf("%s %s \n",n,a);
}
int main() {
	name();
	system("pause");
	return 0;
}
