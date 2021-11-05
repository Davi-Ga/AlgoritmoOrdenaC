void countingSort(int *a, int size) {
	int *output = (int *) calloc(size, sizeof(int));
	int max = a[0];
  unsigned long int comp;
	
	
    for (int i = 1; i < size; i++) {
      comp+=1;
        if (a[i] > max)
        max = a[i];
        
    }

  int count[max];

    for (int i = 0; i <= max; ++i) {
      count[i] = 0;
      comp+=1;
    }

      for (int i = 0; i < size; i++) {
        count[a[i]]++;
        comp+=1;
      }

        for (int i = 1; i < max; i++) {
          count[i] += count[i - 1];
          comp+=1;
        }

          for (int i = size - 1; i >= 0; i--) {
            output[count[a[i]] - 1] = a[i];
            count[a[i]]--;
            comp+=1;
          }

            for (int i = 0; i < size; i++) {
              a[i] = output[i];
              comp+=1;
            }
  //printf("%ld",comp);
  free(output);
  
}