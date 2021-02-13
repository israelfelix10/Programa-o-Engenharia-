#include <stdio.h>
#include <stdlib.h>

int vezes (int a, int b) {
 return a*b;
}


int main(){

int x, y, z;
int (*p)(int, int);
printf("Digite 2 numéros: ");
scanf ("%d %d", &x, &y);

p = vezes;
z= p (x,y);
printf("Multiplicação = %d \n", z);


return 0;

}
