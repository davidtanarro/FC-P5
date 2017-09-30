/*-------------------------------------------------------------------
**
**  Fichero:
**    utils.c  10/6/2014
**
**    Fundamentos de Computadores
**    Dpto. de Arquitectura de Computadores y Autom�tica
**    Facultad de Inform�tica. Universidad Complutense de Madrid
**
**  Prop�sito:
**    Contiene las implementaciones de funciones auxiliares
**
**  Notas de dise�o:
**
**-----------------------------------------------------------------*/

#include "utils.h"

#define LOOP_COUNT (487)

/* Funci�n que realiza una espera activa de time milisegundos */
void Delay( int time )
{
	int i;

	// Bucle de espera activa
	for( ; time>0; time--)
		for( i=LOOP_COUNT; i; i-- );
}
