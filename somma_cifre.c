/*Algoritmo che ricevuto in input un numero intero di 3 cifre, somma le lingole cifre. Nei casi in cui il numero inserito sia minore o maggiore di 3 cifre, 
verrà stampato un messaggio di errore.*/

#include <stdio.h>
int main()
{
	int v,c1,c2,c3,sc=0;
	printf("Inserire un numero intero di 3 cifre: \t ");
	scanf("%d",&v);
	if (v < 100)
	{
		printf("\nERRORE! Il numero inserito e' composto da meno di tre cifre!");
	}
	else if (v > 999)
	{
		printf("\nERRORE! Il numero inserito e' composto da piu' di tre cifre!");
	}
	else
	{
		c1 = v % 10;
		c2 = ( v / 10 ) % 10;
		c3 = ( v / 100 ) % 10;
		sc = c1 + c2 + c3;
		printf("\n\nLa somma delle cifre che compongono il numero e': \t %d"" \t ",sc);
	}
return 0;
}