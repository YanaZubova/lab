#include "stdio.h"
#include "stdafx.h"


int main()
{
int const N = 5;
	int i=0, A[N], min=0, max=0;
	printf("vvedite massiv chisel:\n");
	for ( i = 0; i < N; i ++ )
		scanf("%d",&A[i]);
	for ( i = 0; i < N; i ++ )
		{
			if ( A[i] > 0 )
			max+=1;
			if ( A[i] < 0 )
		min+=1;
	}
	if(max=min)
	printf("odinakovo\n");
	if(max>min)
	printf("bolshe pologit\n");
	if(min>max)
	printf("bolshe otric\n");
	printf("\n Min\n");
	return 0;
}

