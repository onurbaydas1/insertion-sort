#include <stdio.h>
void display(int arr[], int n) {     
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


void insert(int D[], int N){
    
    int i, k, ekle;
    for (i=1;i<N;i++) {
        ekle=D[i];
        for(k=i-1; k>=0 && ekle<=D[k] ; k--){
            D[k+1]=D[k];
        }
        D[k+1]=ekle;
        
    }
    
    
}
int main()
{
    int D[7]={7,6,4353,231,3,9,10};
    int N = 7;
    display(D,N);
    insert(D,N);
    display(D,N);
    
}
