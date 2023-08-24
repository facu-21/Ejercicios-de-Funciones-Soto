#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void num(int l,char n[4]){
	if(l==1){
		if(n[0]=='0'){
			printf("Cero");
		}
		if(n[0]=='1'){
			printf("Uno");
		}
		if(n[0]=='2'){
			printf("Dos");
		}
		if(n[0]=='3'){
			printf("Tres");
		}
		if(n[0]=='4'){
			printf("Cuatro");
		}
		if(n[0]=='5'){
			printf("Cinco");
		}
		if(n[0]=='6'){
			printf("Seis");
		}
		if(n[0]=='7'){
			printf("Siete");
		}
		if(n[0]=='8'){
			printf("Ocho");
		}
		if(n[0]=='9'){
			printf("Nueve");
		}
	}
	if(l==2){
		if(n[0]=='1' || n[0]=='2'){
			if(n[0]=='1'){
				if(n[1]=='0'){
					printf("Diez");
				}
				if(n[1]=='1'){
					printf("Once");
				}
				if(n[1]=='2'){
					printf("Doce");
				}
				if(n[1]=='3'){
					printf("Trece");
				}
				if(n[1]=='4'){
					printf("Catorce");
				}
				if(n[1]=='5'){
					printf("Quince");
				}
				if(n[1]=='6'){
					printf("Dieciseis");
				}
				if(n[1]=='7'){
					printf("Diecisiete");
				}
				if(n[1]=='8'){
					printf("Dieciocho");
				}
				if(n[1]=='9'){
					printf("Diecinueve");
				}
			}
			if(n[0]=='2'){
				if(n[1]=='0'){
					printf("Veinte");
				}
				if(n[1]=='1'){
					printf("Veintiuno");
				}
				if(n[1]=='2'){
					printf("Veintidos");
				}
				if(n[1]=='3'){
					printf("Veintitres");
				}
				if(n[1]=='4'){
					printf("Veinticuatro");
				}
				if(n[1]=='5'){
					printf("Veinticinco");
				}
				if(n[1]=='6'){
					printf("Veintiseis");
				}
				if(n[1]=='7'){
					printf("Veintisiete");
				}
				if(n[1]=='8'){
					printf("Veintiocho");
				}
				if(n[1]=='9'){
					printf("Veintinueve");
				}
			}
		}
		else{
			if(n[0]=='3'){
				printf("Treinta");
			}
			if(n[0]=='4'){
				printf("Cuarenta");
			}
			if(n[0]=='5'){
				printf("Cincuenta");
			}
			if(n[0]=='6'){
				printf("Sesenta");
			}
			if(n[0]=='7'){
				printf("Setenta");
			}
			if(n[0]=='8'){
				printf("Ochenta");
			}
			if(n[0]=='9'){
				printf("Noventa");
			}
			if(n[1]!='0'){
				if(n[1]=='1'){
					printf(" y uno");
				}
				if(n[1]=='2'){
					printf(" y dos");
				}
				if(n[1]=='3'){
					printf(" y tres");
				}
				if(n[1]=='4'){
					printf(" y cuatro");
				}
				if(n[1]=='5'){
					printf(" y cinco");
				}
				if(n[1]=='6'){
					printf(" y seis");
				}
				if(n[1]=='7'){
					printf(" y siete");
				}
				if(n[1]=='8'){
					printf(" y ocho");
				}
				if(n[1]=='9'){
					printf(" y nueve");
				}
			}
		}
	}
	if(l==3){
		if(n[0]=='1'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Cien");
			}
			else{
				printf("Ciento ");
			}
		}
		if(n[0]=='2'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Doscientos");
			}
			else{
				printf("Doscientos ");
			}
		}
		if(n[0]=='3'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Trescientos");
			}
			else{
				printf("Trescientos ");
			}
		}
		if(n[0]=='4'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Cuatrocientos");
			}
			else{
				printf("Cuatrocientos ");
			}
		}
		if(n[0]=='5'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Quinientos");
			}
			else{
				printf("Quinientos ");
			}
		}
		if(n[0]=='6'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Seiscientos");
			}
			else{
				printf("Seiscientos ");
			}
		}
		if(n[0]=='7'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Setecientos");
			}
			else{
				printf("Setecientos ");
			}
		}
		if(n[0]=='8'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Ochocientos");
			}
			else{
				printf("Ochocientos ");
			}
		}
		if(n[0]=='9'){
			if(n[1]=='0' && n[2]=='0'){
				printf("Novecientos");
			}
			else{
				printf("Novecientos ");
			}
		}
		if(n[1]=='1' || n[1]=='2'){
			if(n[1]=='1'){
				if(n[2]=='0'){
					printf("diez");
				}
				if(n[2]=='1'){
					printf("once");
				}
				if(n[2]=='2'){
					printf("doce");
				}
				if(n[2]=='3'){
					printf("trece");
				}
				if(n[2]=='4'){
					printf("catorce");
				}
				if(n[2]=='5'){
					printf("quince");
				}
				if(n[2]=='6'){
					printf("dieciseis");
				}
				if(n[2]=='7'){
					printf("diecisiete");
				}
				if(n[2]=='8'){
					printf("dieciocho");
				}
				if(n[2]=='9'){
					printf("diecinueve");
				}
			}
			if(n[1]=='2'){
				if(n[2]=='0'){
					printf("veinte");
				}
				if(n[2]=='1'){
					printf("veintiuno");
				}
				if(n[2]=='2'){
					printf("veintidos");
				}
				if(n[2]=='3'){
					printf("veintitres");
				}
				if(n[2]=='4'){
					printf("veinticuatro");
				}
				if(n[2]=='5'){
					printf("veinticinco");
				}
				if(n[2]=='6'){
					printf("veintiseis");
				}
				if(n[2]=='7'){
					printf("veintisiete");
				}
				if(n[2]=='8'){
					printf("veintiocho");
				}
				if(n[2]=='9'){
					printf("veintinueve");
				}
			}
		}
		else{
			if(n[1]=='3'){
				printf("creinta");
			}
			if(n[1]=='4'){
				printf("cuarenta");
			}
			if(n[1]=='5'){
				printf("cincuenta");
			}
			if(n[1]=='6'){
				printf("sesenta");
			}
			if(n[1]=='7'){
				printf("setenta");
			}
			if(n[1]=='8'){
				printf("ochenta");
			}
			if(n[1]=='9'){
				printf("noventa");
			}
			if(n[2]!='0'){
				if(n[1]!='0'){
					if(n[2]=='1'){
						printf(" y uno");
					}
					if(n[2]=='2'){
						printf(" y dos");
					}
					if(n[2]=='3'){
						printf(" y tres");
					}
					if(n[2]=='4'){
						printf(" y cuatro");
					}
					if(n[2]=='5'){
						printf(" y cinco");
					}
					if(n[2]=='6'){
						printf(" y seis");
					}
					if(n[2]=='7'){
						printf(" y siete");
					}
					if(n[2]=='8'){
						printf(" y ocho");
					}
					if(n[2]=='9'){
						printf(" y nueve");
					}
				}
				else{
					if(n[2]=='1'){
						printf("uno");
					}
					if(n[2]=='2'){
						printf("dos");
					}
					if(n[2]=='3'){
						printf("tres");
					}
					if(n[2]=='4'){
						printf("cuatro");
					}
					if(n[2]=='5'){
						printf("cinco");
					}
					if(n[2]=='6'){
						printf("seis");
					}
					if(n[2]=='7'){
						printf("siete");
					}
					if(n[2]=='8'){
						printf("ocho");
					}
					if(n[2]=='9'){
						printf("nueve");
					}
				}
			}
		}
	}
	if(l==4){
		if(n[0]=='1'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Mil");
			}
			else{
				printf("Mil ");
			}
		}
		if(n[0]=='2'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Dos mil");
			}
			else{
				printf("Dos mil ");
			}
		}
		if(n[0]=='3'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Tres mil");
			}
			else{
				printf("Tres mil ");
			}
		}
		if(n[0]=='4'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Cuatro mil");
			}
			else{
				printf("Cuatro mil ");
			}
		}
		if(n[0]=='5'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Cinco mil");
			}
			else{
				printf("Cinco mil ");
			}
		}
		if(n[0]=='6'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Seis mil");
			}
			else{
				printf("Seis mil ");
			}
		}
		if(n[0]=='7'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Siete mil");
			}
			else{
				printf("Siete mil ");
			}
		}
		if(n[0]=='8'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Ocho mil");
			}
			else{
				printf("Ocho mil ");
			}
		}
		if(n[0]=='9'){
			if(n[1]=='0' && n[2]=='0' && n[3]=='0'){
				printf("Nueve mil");
			}
			else{
				printf("Nueve mil ");
			}
		}
		if(n[1]=='1'){
			if(n[2]=='0' && n[3]=='0'){
				printf("cien");
			}
			else{
				printf("ciento ");
			}
		}
		if(n[1]=='2'){
			if(n[2]=='0' && n[3]=='0'){
				printf("doscientos");
			}
			else{
				printf("doscientos ");
			}
		}
		if(n[1]=='3'){
			if(n[2]=='0' && n[3]=='0'){
				printf("trescientos");
			}
			else{
				printf("trescientos ");
			}
		}
		if(n[1]=='4'){
			if(n[2]=='0' && n[3]=='0'){
				printf("cuatrocientos");
			}
			else{
				printf("cuatrocientos ");
			}
		}
		if(n[1]=='5'){
			if(n[2]=='0' && n[3]=='0'){
				printf("quinientos");
			}
			else{
				printf("quinientos ");
			}
		}
		if(n[1]=='6'){
			if(n[2]=='0' && n[3]=='0'){
				printf("seiscientos");
			}
			else{
				printf("seiscientos ");
			}
		}
		if(n[1]=='7'){
			if(n[2]=='0' && n[3]=='0'){
				printf("setecientos");
			}
			else{
				printf("setecientos ");
			}
		}
		if(n[1]=='8'){
			if(n[2]=='0' && n[3]=='0'){
				printf("ochocientos");
			}
			else{
				printf("ochocientos ");
			}
		}
		if(n[1]=='9'){
			if(n[2]=='0' && n[3]=='0'){
				printf("novecientos");
			}
			else{
				printf("novecientos ");
			}
		}
		if(n[2]=='1' || n[2]=='2'){
			if(n[2]=='1'){
				if(n[3]=='0'){
					printf("diez");
				}
				if(n[3]=='1'){
					printf("once");
				}
				if(n[3]=='2'){
					printf("doce");
				}
				if(n[3]=='3'){
					printf("trece");
				}
				if(n[3]=='4'){
					printf("catorce");
				}
				if(n[3]=='5'){
					printf("quince");
				}
				if(n[3]=='6'){
					printf("dieciseis");
				}
				if(n[3]=='7'){
					printf("diecisiete");
				}
				if(n[3]=='8'){
					printf("dieciocho");
				}
				if(n[3]=='9'){
					printf("diecinueve");
				}
			}
			if(n[2]=='2'){
				if(n[3]=='0'){
					printf("veinte");
				}
				if(n[3]=='1'){
					printf("veintiuno");
				}
				if(n[3]=='2'){
					printf("veintidos");
				}
				if(n[3]=='3'){
					printf("veintitres");
				}
				if(n[3]=='4'){
					printf("veinticuatro");
				}
				if(n[3]=='5'){
					printf("veinticinco");
				}
				if(n[3]=='6'){
					printf("veintiseis");
				}
				if(n[3]=='7'){
					printf("veintisiete");
				}
				if(n[3]=='8'){
					printf("veintiocho");
				}
				if(n[3]=='9'){
					printf("veintinueve");
				}
			}
		}
		else{
			if(n[2]=='3'){
				printf("treinta");
			}
			if(n[2]=='4'){
				printf("cuarenta");
			}
			if(n[2]=='5'){
				printf("cincuenta");
			}
			if(n[2]=='6'){
				printf("sesenta");
			}
			if(n[2]=='7'){
				printf("setenta");
			}
			if(n[2]=='8'){
				printf("ochenta");
			}
			if(n[2]=='9'){
				printf("noventa");
			}
			if(n[3]!='0'){
				if(n[2]!='0'){
					if(n[3]=='1'){
						printf(" y uno");
					}
					if(n[3]=='2'){
						printf(" y dos");
					}
					if(n[3]=='3'){
						printf(" y tres");
					}
					if(n[3]=='4'){
						printf(" y cuatro");
					}
					if(n[3]=='5'){
						printf(" y cinco");
					}
					if(n[3]=='6'){
						printf(" y seis");
					}
					if(n[3]=='7'){
						printf(" y siete");
					}
					if(n[3]=='8'){
						printf(" y ocho");
					}
					if(n[3]=='9'){
						printf(" y nueve");
					}
				}
				else{
					if(n[3]=='1'){
						printf("uno");
					}
					if(n[3]=='2'){
						printf("dos");
					}
					if(n[3]=='3'){
						printf("tres");
					}
					if(n[3]=='4'){
						printf("cuatro");
					}
					if(n[3]=='5'){
						printf("cinco");
					}
					if(n[3]=='6'){
						printf("seis");
					}
					if(n[3]=='7'){
						printf("siete");
					}
					if(n[3]=='8'){
						printf("ocho");
					}
					if(n[3]=='9'){
						printf("nueve");
					}
				}
			}
		}
	}
}

int main(){
	char n[4];
	int l;
	printf("Ingrese un numero (maximo 4 digitos): ");
	gets(n);
    l=strlen(n);
	num(l,n);
	return 0;
}
