/*
 * File:   LED_PARPADEO.c
 * Author: Calle Condori Rodrigo
 *
 * Created on 9 de noviembre de 2024, 13:10
 */

#include "FUSIBLES.h"
#include <pic16f877a.h>
#include <xc.h>
#define _XTAL_FREQ 4000000

void main(void) {
    TRISCbits.TRISC0=0;
    PORTC=0X00;
    while(1){
        PORTCbits.RC0=1;
        __delay_ms(1000);
        PORTCbits.RC0=0;
        __delay_ms(1000);
    }
    return;
}
