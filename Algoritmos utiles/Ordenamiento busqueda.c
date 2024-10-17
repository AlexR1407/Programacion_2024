# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#define p printf
#define s scanf
#define _LONG 20

//PROTOTIPOS
void cargarVector(int[_LONG]);
void mostrarVector(int[_LONG]);
void ordenarVector(int[_LONG]);

int main(void)
{
    int vector[_LONG];

    cargarVector(vector);
    mostrarVector(vector);
    ordenarVector(vector);
    p("\nVECTOR ORDENADO:\n");
    mostrarVector(vector);

    return 0;
}

void cargarVector(int vec[_LONG])
{
    int num, CS=50, CI=21;
    int vecAux[51]={0};
    srand(time(NULL));

    for(int i=0; i<_LONG; i++)
    {
        num = rand()%(CS-CI+1)+CI;
        if(vecAux[num]==0)
        {
            vec[i] = num;
            vecAux[num] = 1;
        }else
            i--;
    }
}

void mostrarVector(int vec[_LONG])
{
    for(int i=0; i<_LONG; i++)
        p("%3d", vec[i]);
}

void ordenarVector(int vec[_LONG])
{
    int aux;

    for(int i=0; i<_LONG-1; i++)
        for(int j=i+1; j<_LONG; j++)
            if(vec[i]>vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
}