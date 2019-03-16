/*Algoritmo che calcola circonferenza e superficie di un cerchio ricevuto in input il raggio (intero).*/

#include <stdio.h>
int main()
{
	const double pi=3.14159265359;
	int r;
	double c,s;
	printf("Inserire il raggio del cerchio:\t"),
	scanf("%d",&r);
	c = 2.0 * pi * (double) r;
	s = pi * (double) r * (double) r;
	printf("\nCirconferenza del cerchio:\t%f",c);
	printf("\nSuperficie del cerchio:\t%f",s);
return 0;
}
