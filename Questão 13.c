#include <stdio.h>
#include <stdlib.h>



int main(){
float **v, *aux;
   int n, i, x;
   printf("Digite o tamanho do vetor: ");
   scanf ("%d", &n);
   v = malloc (n * sizeof (float*));
   for (i = 0; i < n; ++i){
        v[i] = malloc (n * sizeof(float));
    //printf("Digite um número pra posição %d :", i);
      //scanf ("%d", &v[i]);
      }
   for (i = 0; i < n; ++i){
    printf("Digite um número pra posição %d :", i);
      scanf ("%d", &v[i]);
      }
for(i=0; i<n; i++){
    for(int y = i; y < n; y++ ){
        if (v[i]>v[y]){
            aux = v[i];
            v[i] = v[y];
            v[y] = aux;
        }
    }
}

for (i = 0; i < n; i++){
    printf("vetor em ordem crescente eh: %d \n", v[i]);
}
   free (v);




}
