#include <stdio.h>
#define m 1000
void Punto5(); void Punto6(); void Punto7();

int main(){



    return 0;
}
//5. Crea un programa que, dados dos valores para a y b, los intercambie.
void Punto5(){

    int a,b,aux;

    printf("Ingresar un valor para a: "); scanf("%d",&a);
    printf("Ingresar un valor para b: "); scanf("%d",&b);
    aux=a; a=b; b=aux;
    printf("Ahora los valores son: \n");
    printf("a=%d \t b=%d",a,b);
}
//6. Ingresar por teclado un valor en Km y mostrarlo expresado en metros.
void Punto6(){

    float metros,km;

    printf("Ingresar el valor en km: "); scanf("%f",&km);
    metros=km*m;
    printf("Es igual a %.2fm",metros);
}
//7. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
//división (para esta última suponer divisor distinto de cero).
void Punto7(){



}
