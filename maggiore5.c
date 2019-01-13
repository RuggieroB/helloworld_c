/*Algoritmo che ricevuti in input 5 valori interi, stampa il valore maggiore (solo if, senza else o else if).*/

#include <stdio.h>
int main()
{
	int val1,val2,val3,val4,val5,max;
	printf("Inserire cinque valori interi:\t");
	scanf("%d%d%d%d%d",&val1,&val2,&val3,&val4,&val5);
	max = val1;
	if (val2 > max)  {
		max = val2;
	}
	if (val3 > max)  {
		max = val3;
	}
	if (val4 > max)  {
		max = val4;
	}
	if (val5 > max)  {
		max = val5;
	}
	printf("Il valore maggiore e':\t%d",max);
return 0;
}