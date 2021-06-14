#include <stdio.h>

int main(){

        int n;

        printf("Especifica la altura");
        scanf("%i",&n);
        prinft("\n");
	prinft("Especifica el ancho");
	scanf("%i",&n);
        prinft("\n");

                for(int r = 1; r<= n; r++)
                {
                        for(int l = 1 ; l <=n ; l++)
                        {
                                prinft("*");
                        }
                        printf("\n");
                }

        return 0
