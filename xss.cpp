#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char s1[] = "26/11/2006";
char *ptr;
int dia, mes, ano;

printf( "Fecha=%s\n", s1 );

ptr = strtok( s1, "/" );
dia = atoi(ptr);
printf( "Dia: %d\n", dia);

ptr = strtok( NULL, "/" );
mes = atoi(ptr);
printf( "Mes: %d\n", mes);

ptr = strtok( NULL, "/" );
ano = atoi(ptr);
printf( "Año: %d\n", ano);

}
