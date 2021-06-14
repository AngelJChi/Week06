#include <stdio.h>

int main(){

	float km,mi;

	printf("Escribe los kilometros por hora");
	scanf("%d",&km);

	mi = km * 0.6213712;

	printf("%d km equivale a millas por hora", mi);

	return 0;
}
