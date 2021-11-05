void quicksort(int *a, int left, int right){
    int swap,i,j,pivo;
    unsigned long int comp=0;

    i=left;
    j=right;

    pivo=(int)((i+j)/2);

        while(i<=j){
            
            while(a[i]<pivo && i<right){
                i++;
                comp+=1; 
            }
                while(a[j]>pivo && j>left){
                    j--;
                    
                }
                    if(i<=j){
                        swap=a[i];
                        a[i]=a[j];
                        a[j]=swap;
                        i++;
                        j++;
                         
                    }
        }
       
    printf("%ld-",comp);  
        if(j>left){
            
            quicksort(a,left,j);
        }  
      
            if(i<right){
                
                quicksort(a,i,right);
            }    
}