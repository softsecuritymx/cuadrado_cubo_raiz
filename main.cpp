#include <stdio.h>
#include <math.h>
int main(){
	int x;
	float resultado1,resultado2,resultado3;
	printf("Ingrese un numero positivo: ");
	scanf("%d",&x);
	
	resultado1 = (pow(x,2)-1)/(pow(x,2)+1);
	resultado2 = pow(x,2)+1;
	resultado3 = x * (x-1)/2+1;
	
	printf("\n El resultado1 es %f",resultado1);
	printf("\n El resultado2 es %f",resultado2);
	printf("\n El resultado3 es %f",resultado3);
	
}
