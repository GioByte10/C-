#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
char s1[] = "26/11/2006";
char *ptr;
int dia, mes, a�o;

printf( "Fecha=%s\n", s1 );

ptr = strtok( s1, "/" );
dia = atoi(ptr);
printf( "Dia: %d\n", dia);

ptr = strtok( NULL, "/" );
mes = atoi(ptr);
printf( "Mes: %d\n", mes);

ptr = strtok( NULL, "/" );
a�o = atoi(ptr);
printf( "A�o: %d\n", a�o);

}
