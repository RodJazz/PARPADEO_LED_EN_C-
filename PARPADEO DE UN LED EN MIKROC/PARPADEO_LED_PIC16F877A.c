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