#include <stdio.h>
#include <stdlib.h>

int sgn(int n){
	if(n>=0){
		printf("%d\n",n);
		return 0;
	}
	else{
		printf("%d\n",n*(-1));
		return 1;
	}
}
	
int main(){
	int n;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	sgn(n);
	system("pause");
	return 0;
}
