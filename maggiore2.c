/*Algoritmo che ricevuto in input 2 valori interi, stampa il maggiore tra i due utilizzando una sola if (niente else o else if).*/

#include <stdio.h>
int main()
{
	int val1,val2,max;
	printf("Inserire due valori interi: \t");
	scanf("%d%d",&val1,&val2);
	max = val1;
	if (val2 > max) {
		max = val2;
	}
	printf("Il valore maggiore e':\t%d",max);
return 0;
}