//problema 2534
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void lerVetor(int notas[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&notas[i]);
}

int compint(){
	return ;
}

int main()
{
	int n,q,pos;	
	int notas[200];
	while ( scanf("%d %d",&n, &q)==2 ){
		lerVetor(notas,n);
                //a funcao qsort ja existe no c
                //vc so precisa criar a compint (se vira malandro)
		qsort(notas,n, sizeof(int), compint); 
		scanf("%d",&pos);
		printf("%d\n",notas[pos-1]);
	}
    return 0;
}