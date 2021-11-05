#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "radsortlib.h"

void sorteiaVet(int n){
   int i;
   int*milhao;
   clock_t t;
   
   milhao = (int *)calloc(n, sizeof(int));
   srand( (unsigned)time(NULL) );

      for(i=0;i<n;i++){
         milhao[i]=(rand()%1000);
      }
  
   t=clock();
   radixsort(milhao,n);
   t=clock()-t;

   printf("Para %d valores o tempo de execucao sera de %lf\n",n,((double)t)/((CLOCKS_PER_SEC/1000)));
}

int main (){
  
   sorteiaVet(1000);
   sorteiaVet(10000);
   sorteiaVet(100000);
   sorteiaVet(1000000);

   system("pause");
   return 0;
}