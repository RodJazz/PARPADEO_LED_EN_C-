#line 1 "C:/Users/USUARIO/Desktop/LENGUAJE C/PIC C COMPILER/PARPADEO DE UN LED EN MIKROC/PARPADEO_LED_PIC16F877A.c"
void main() {
 TRISC=0X00;
 PORTC=0X00;
 while(1){
 RC0_bit=1;
 delay_ms(1000);
 RC0_bit=0;
 delay_ms(1000);
 }
}
