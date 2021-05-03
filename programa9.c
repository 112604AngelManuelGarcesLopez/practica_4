#include <stdio.h>
int  main ()
{
     /* Garcés López Angel Manuel
    Equipo AMUKE
    03 Mayo 21
    Programa 9. Pide cinco valores,  calcula el promedio de 5 calificaciones 
    */

    float price1, price2, price3, porcentaje, total;

    printf ("\n \n Programa 9" );
    printf ("\n \n saca el total ");
    printf ("\n \n Dame el precio1 ");// Permite capturar un valor real y lo guarda en variable primer
    scanf ("%f", &price1);
    printf ("\n \n Dame el precio2 ");
    scanf ("%f", &price2); 
    printf ("\n \n Dame el precio3 ");
    scanf ("%f", &price3); 
    printf ("\n \n Dame el porcentaje");
    scanf ("%f", &porcentaje);
    
    prom = (precio1 + precio2 + precio3 - porcentaje) / 5; // Formula matematica para calcular el promedio.
    printf ("\n El promedio final es %f", prom);

    return  0;
}