/*
  Autor: Calle C.Rodrigo
  Materia: Auxiliatura de ELT3822
  Programa de iniciaci�n al lenguaje C con PIC C Compiler
  Ejemplo 1: Encender un led utilizando registros
*/
#include <16f877a.h>   //Librer�a para poder utilizar instrucciones necesarias para controlar al microcontrolador
#fuses xt,nowdt,put,noprotect,nolvp //Directivas para configurar fusibles del microcontrolador
#use delay(clock=4000000) // Directiva para definir la frecuencia del cristal
#byte TRISC = 0X87     //Directiva para definir TRISC en su posici�n correspondiente en la ram
#byte PORTC = 0X07     //Directiva para definir PORTC en su posici�n correspondiente en la ram
//Funci�n principal
void main(){
 TRISC=0X00;   //Configuramos todo el puerto C como salida
 PORTC=0X00;   //Limpiamos el puerto C
 while(true){  //Bucle while infinito, a qui las instrucciones principales se ejecutaran de forma ciclica.
  bit_set(PORTC,0);  //Instrucci�n para activar un bit (1 l�gico)
  delay_ms(1000);    //Instrucci�n para realizar un retardo de 1 segundo
  bit_clear(PORTC,0);//Instrucci�n para desactivar un bit (0 l�gico)
  delay_ms(1000);    //Instrucci�n para realizar un retardo de 1 segundo
 }
}
