/*-----------------------------------------------------------------
**
**  Fichero:
**    main.c  10/6/2014
**
**    Fundamentos de Computadores
**    Dpto. de Arquitectura de Computadores y Automática
**    Facultad de Informática. Universidad Complutense de Madrid
**
**  Propósito:
**    Hace paradear los leds a una frecuencia de 1 Hz
**
**  Notas de diseño:
**
**---------------------------------------------------------------*/

#include "leds.h"
#include "button.h"
#include "D8Led.h"
#include "utils.h"

int main(void)
{
    leds_init();
    button_init();
    D8Led_init();

    while( 1 ){
        leds_switch();
        // espera 1s
        Delay( 1000 );
    }

    return 0;
}


