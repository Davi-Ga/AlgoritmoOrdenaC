void radixsort(int vetor[], int tamanho) {
   int i;
   int *b;
   int maior = vetor[0];
   int exp = 1;
   unsigned long int comp;

      b = (int *)calloc(tamanho, sizeof(int));

         for (i = 0; i < tamanho; i++) {
            if (vetor[i] > maior)
               maior = vetor[i];
               comp+=1;
         }

    while (maior/exp > 0) {
      int bucket[10] = { 0 };

         for (i = 0; i < tamanho; i++){
            bucket[(vetor[i] / exp) % 10]++;
            comp+=1;
         }
            for (i = 1; i < 10; i++){
               bucket[i] += bucket[i - 1];
               comp+=1;
            }
               for (i = tamanho - 1; i >= 0; i--){
                  b[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
                  comp+=1;
               }
                  for (i = 0; i < tamanho; i++){
                     vetor[i] = b[i];
                     comp+=1;
                  }
    	exp *= 10;
    }
  // printf("%ld",comp);
   free(b);
}

