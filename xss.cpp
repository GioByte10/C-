#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
char s1[] = "26/11/2006";
char *ptr;
int dia, mes, año;

printf( "Fecha=%s\n", s1 );

ptr = strtok( s1, "/" );
dia = atoi(ptr);
printf( "Dia: %d\n", dia);

ptr = strtok( NULL, "/" );
mes = atoi(ptr);
printf( "Mes: %d\n", mes);

ptr = strtok( NULL, "/" );
año = atoi(ptr);
printf( "Año: %d\n", año);

}
