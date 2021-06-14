#include <stdio.h>

int main(){

	const float PI=3.1415;
	float radio,volumen;

	printf("Ingrese el radio de la esfera");
	scanf("%f",&radio);
	
	volumen = (4/3) * PI * (radio * radio * radio);

	printf("\nEl volumen de la esfera es: %f", volumen);

	return 0
}
