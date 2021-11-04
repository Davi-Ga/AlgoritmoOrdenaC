#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "countsortlib.h"

void defineVet(int n){
   int i;
   int *milhao;
   milhao = (int *)calloc(n, sizeof(int));
   clock_t t;

   srand( (unsigned)time(NULL) );

    for(i=0;i<n;i++){
        milhao[i]=(rand()%1000);
    }
  
   t=clock();
   countingSort(milhao,n);
   t=clock()-t;

	
   printf("Para %d valores o tempo de execucao sera de %lf\n",n,((double)t)/((CLOCKS_PER_SEC/1000)));
	free(milhao);
	}

int main() {
  
  defineVet(1000);
  defineVet(10000);
  defineVet(100000);
  defineVet(1000000);

  return 0;
}

