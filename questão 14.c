#include <stdio.h>
#include <stdlib.h>

float compar (const void * a, const void * b) {
   return ( *(float*)a - *(float*)b );
   // funcção para ordenação
    //Valor maior do que zero: se o primeiro valor for maior do que o segundo.
    //Valor menor do que zero: se o primeiro valor for menor do que o segundo.
}


float comparar (const void * a, const void * b) {
   if (*(float*)a == *(float*)b)
    return 0; //iguais
   else
    if (*(float*)a < *(float*)b)
   return -1; //vem antes
   else
    return 1; //vem depois
}


int main(){
float **v; //ponteiro para ponteiro
   int n, i;

   printf("Digite o tamanho do vetor: "); //alocando tamanho do vetor
   scanf ("%d", &n);

   v = malloc (n * sizeof (float*)); //alocando vetor na memória

   for (i = 0; i < n; ++i){
    printf("Digite um número pra posição %d :", i); //inserindo os dados no vetor
      scanf ("%f", &v[i]);
      }

qsort(v,n, sizeof(float), compar); //implementando função qsort

for (i = 0; i < n; i++){
    printf("vetor em ordem crescente eh: %.2f \n", v[i]); //imprimindo resultado
}
   free (v); //liberando a memória




}
