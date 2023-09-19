/*#include<stdio.h>
int main(){
	if(5>3 && 10<=0);
	
	printf("Instruccion dentro de if\n");
	if(5>=3);
	{printf("Instruccion anidada dentro de if\n");
	}
	else
	{
	printf("Instruccion aninadada dentro de else\n");
	}
	else
	{
		printf("Instruccion dentro de else\n");

	}
	printf("instruccion fuera de else");

	
    printf("\a");
    
	return 0;
}



#include <stdio.h>

int main()

{
	int i,j,numero;
	for(i=1; i<=10; i++)
	{
		printf("\nTabla de multiplicar del %d",i);
		for(j=1; j<=10; j++)
		printf("\n %d* %d=%d",i,j,i*j);
		
	}
	return 0;
}


//programa que imprime los numeros pares del 1 al 100 y la suma de todos ellos 
#include<stdio.h>
int main()
{
	int x,sum=0;
	for(x=1;x<=100;x++)
	{
		if(x%2==0){
			printf("%d\n",x);
			sum+=x;
		}
	}
	printf("Suma de numeros enteros pares: %d\n",sum);
	return 0;
}



//programa que obtiene las temperaturas de 3 dias consecutivos 
#include<stdio.h>
#include<math.h>
int main()
{
	float temp;
	int dias=1, horas;
	while(dias<=3)
	{
		for(horas=1; horas<=24;horas++)
	{
		printf("Temp del dia %d en la hora %d:",dias,horas);
		scanf("%f",&temp);
	}
	dias=dias+1;
	}
	return 0;
}


//programa que obtiene los 100 primeros numeros enteros y los almacena en un arreglo( no salio)
#include<stdio.h>
int main()
{
	int x, tabla[100];
	
	for(x=0;x<100;x++);
	tabla[x]=x;
	
	for(x=0;x<100;x++)
	printf("%d\n", tabla[100-x]);

    return 0;
}
|*/

#include<stdio.h>
int main()
{
	float aux, numeros[10];
	int i,j,n=10;
	
	for (i=0;i<n;i++){
	printf("Escribe un numero");
	scanf("%f",&numeros[i]);}
	
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(numeros[i]<numeros[j]){
			aux=numeros[i];
			numeros[i]=numeros[j];
			numeros[j]=aux;
		}
	}

}
for (i=n-1;i>=0;i--)
printf("%f\n",numeros[i]);
	return 0;
}
	







