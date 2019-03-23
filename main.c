#include <stdio.h>
#include <stdlib.h>

int pedirnumero(void);
float sacarPromdeio (int suma, int cantidad);
/** \brief
 * retorna 1 si el alumno aprobo la materia.
 * retorna 0 si el alumno no aprobo la materia.
 * \param notaminima int
 * es la nota minima para aprobar la materia.
 * \param nota int
 * es la nota que se saco el alumno
 * \return int
 * 0 para no aprobo
 * 1 para apronado
 */
int sacaraprobacion(int notaminima, int nota);
int main()

{
    int elNumeroIngresado;
    float promedio;
    int estaAprobado;
    elNumeroIngresado=pedirnumero();
    printf("el numero ingresado fue:%d",elNumeroIngresado);
    promedio=sacarPromdeio(94,5);
    printf("\n el promedio fue:%f",promedio);
    estaAprobado=sacaraprobacion(6,elNumeroIngresado);
    if(estaAprobado==1)
    {
        printf("\n aprobo");
    }
    else
    {
        printf("\n no aprobo");
    }
}

int pedirnumero()
{

int minumero;
printf("\n Ingrese el numero:");
scanf("%d",&minumero);

while(minumero<0 || minumero>10)
{
    printf("\n Numero incorrecto. Por favor ingresar nuevamente el numero:");
    scanf("%d",&minumero);
}
return minumero;
}

float sacarPromdeio (int suma, int cantidad)
{
    float retorno;
    retorno = (float) suma / cantidad ;
    return retorno;
}

int sacaraprobacion(int notaminima, int nota)
{
    int retorno;

    if(nota >= notaminima)
    {
        retorno=1;
    }
    else
    {
        retorno=0;
    }
    return retorno;
}
