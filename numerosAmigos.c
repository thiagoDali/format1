#include <stdio.h>

//prototipos
void leerNumeros(int *num1, int *num2);
int validarSiSonAmigos(int num1, int num2);
int calcularSumaDivisores(int num);

int main(){
	
	//declaraci�n de variables
	int num1, num2, sonAmigos;
	
	//m�dulo que se encarga de la lectura de los datos
	leerNumeros(&num1, &num2);
	
	//m�dulo que valide si es que num1 y num2 son amigos
	sonAmigos = validarSiSonAmigos(num1, num2);
	
	if (sonAmigos){
		printf("Los n�meros ingresados SI son amigos\n");
	}
	else{
		printf("Los n�meros ingresados NO son amigos\n");
	}
	
	return 0;
}


//m�dulo que se encarga de la lectura de los datos
void leerNumeros(int *num1, int *num2){
	printf("Ingrese dos n�meros a evaluar: \n");
	scanf("%d %d", num1, num2);
}


//m�dulo que valide si es que num1 y num2 son amigos
int validarSiSonAmigos(int num1, int num2){
	
	int sonAmigos, sumaDivisoresNum1, sumaDivisoresNum2;
	
	//m�dulo que calcule la suma de divisores de un n�mero (reutilizamos)
	sumaDivisoresNum1 = calcularSumaDivisores(num1);
	sumaDivisoresNum2 = calcularSumaDivisores(num2);
	
	if (sumaDivisoresNum1 == num2 && sumaDivisoresNum2 == num1){
		sonAmigos = 1;
	}
	else{
		sonAmigos = 0;
	}
	
	return sonAmigos;
}

//m�dulo que calcule la suma de divisores de un n�mero
int calcularSumaDivisores(int num){
	
	//declaraci�n de variables
	int sumaDivisoresNum, contador;
	
	sumaDivisoresNum = 0;
	contador = 1;
	
	while (contador <= num){
		
		if (num % contador == 0){
			sumaDivisoresNum = sumaDivisoresNum + contador;
		}
		
		contador++;
	}
	
	return sumaDivisoresNum-num;
}


