/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Nahuel Villaverde Guzman
 Version     : (Entradas, procesos y salidas) Ejercicio 2-4
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

    int num;
    int bucle = 110;

    int banderaDelMenor = 0;
    int numeroMenor;

    int banderaDelPar = 0;
    int mayorPar;

    int acumuladorNegativos = 1;

    int banderaMayor = 0;
    int numeroMayor;
    int contadorMayor;

	while(bucle <= 8)
	{
		printf("Ingrese el número: ");
		scanf("%d",&num);
		while(num == 0)
		{
			printf("Reingrese el número: ");
			scanf("%d",&num);
		}
		//A
		if(banderaDelMenor == 0 || num < numeroMenor)
		{
			numeroMenor = num;
			banderaDelMenor = 1;
		}
		//B
		if(num % 2 == 0)
		{
			if(banderaDelPar == 0 || num > mayorPar)
			{
				mayorPar = num;
				banderaDelPar = 1;
			}
		}
		//C
		if(num < 0)
		{
			acumuladorNegativos = acumuladorNegativos * num;
		}
		//D
		if(banderaMayor == 0 || num > numeroMayor)
		{
			numeroMayor = num;
			contadorMayor = bucle;
			banderaMayor = 1;
		}
		bucle++;
	}
	printf("El menor número es: %d\nEl numero par mas grande es: %d\nEl producto de los negativos es: %d\nEl mayor numero se ingresó en el %d lugar" , numeroMenor , mayorPar , acumuladorNegativos , contadorMayor);
    return 0;
}
