#include <stdio.h>

int main()
{

    int n, i, menor, a;

    printf("Digite o tamanho de a quantidade de valores a serem lidos.\n");
    scanf(" %d", &n);

    int X[n];

    for( i = 0 ; i < n; i++)
	{
        scanf(" %d", &X[i]);
	
		menor=X[0];
 	}
    
	for( i = 0; i < n; i++)
	{
	    if(menor > X[i])
        {
        	menor=X[i];
        	
            a=i;
    	}
	}        
    
    printf("Menor valor: %d\nPosicao eh: %d\n", menor, a); 
    
    return 0;
}