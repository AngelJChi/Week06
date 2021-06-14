#include <stdio.h>

int main(){
	
	int horas,minutos,t1=0,t2=0,total = 0;

	printf("Digite las horas: ");
	scanf("%i",&horas);
	printf("Digite los minutos: ");
        scanf("%i",&minutos);


	t1 = horas * 60;
	t2 = minutos
	total = horas + minutos;

	printf("\nEl equivalente de minutos es %i", minutos);
	printf("\nEl equivalente de horas es %i", minutos);
	printf("\nEl total de minutos es %i", total);

	return 0;
}
