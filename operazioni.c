/*Algoritmo che ricevuti in input 2 valori interi, esegue le 5 operazioni fondamentali.*/

#include <stdio.h>
int main()
{
	int val1,val2,s,d,p,q,r;
	printf("Inserire due valori interi: \t");
	scanf("%d%d",&val1,&val2);
	s=val1+val2;
	d=val1-val2;
	p=val1*val2;
	q=val1/val2;
	r=val1%val2;
	printf("\nSomma: %d "
	"\nDifferenza: %d "
	"\nProdotto: %d "
	"\nQuoziente: %d "
	"\nResto: %d ",s,d,p,q,r);
return 0;
}