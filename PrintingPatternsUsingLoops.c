#include <stdio.h>

#define minimo(a,b)(a < b ? a : b)

int main() 
{

    int n, lado, m;
    scanf("%d", &n);
    lado = (n-1)*2+1;
    for (int fila = 0; fila < lado ; fila++){
	for(int columna = 0; columna < lado; columna++){
	m = minimo(fila,columna);
	m = minimo(m,lado - fila -1);
	m = minimo(m,lado - columna -1);
	printf("%d ",n-m);
	}	
	printf("\n");
    }
    return 0;
}
