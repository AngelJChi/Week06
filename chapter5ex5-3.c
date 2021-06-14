#include <stdio.h>

int main(){

	int ancho,largo,perimetro;

	printf("Escriba el ancho");
	scanf("%d",&ancho);
	printf("Escriba el largo");
        scanf("%d",&largo);

	perimetro = 2 * (ancho + largo);

	printf("\nEl perimetro del rectangulo es: %d", perimetro);


	return 0
}
