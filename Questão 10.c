#include <stdio.h>


int main(){
int a[4];
char b[4];
float c[4];
double d[4];

int i;
for(i=0;i<4;i++){
a[i]=i+1;
b[i]=i+1;
c[i]=i+1;
d[i]=i+1;
}


for(i=0;i<4;i++){
printf(" Tipo: int, Valor:%d, Memória:%u \n ", a[i], &a[i]);
printf("Vemos que o inteiro pulou de a cada 4 unidades de memoria (bytes) \n");



}
printf("Obs.: Os int ocupam 4 bytes e não 2 bytes");
printf("\n \n \n");

for(i=0;i<4;i++){
    printf(" Tipo: char, Valor:%d, Memória:%u \n ", b[i], &b[i]);
printf("Vemos que o char pulou de a cada 1 unidades de memoria (bytes) \n");

}

printf("\n \n \n");

for(i=0;i<4;i++){

printf(" Tipo: float, Valor:%d, Memória:%u \n ", c[i], &c[i]);
printf("Vemos que o float pulou de a cada 4 unidades de memoria (bytes)  \n");

}
printf("\n \n \n");

for(i=0;i<4;i++){

printf(" Tipo: double, Valor:%d, Memória:%u \n ", d[i], &d[i]);
printf("Vemos que o double pulou de a cada 8 unidades de memoria (bytes)  \n");

}
}
