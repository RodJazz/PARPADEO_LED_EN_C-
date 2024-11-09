
_main:

;PARPADEO_LED_PIC16F877A.c,1 :: 		void main() {
;PARPADEO_LED_PIC16F877A.c,2 :: 		TRISC=0X00;
	CLRF       TRISC+0
;PARPADEO_LED_PIC16F877A.c,3 :: 		PORTC=0X00;
	CLRF       PORTC+0
;PARPADEO_LED_PIC16F877A.c,4 :: 		while(1){
L_main0:
;PARPADEO_LED_PIC16F877A.c,5 :: 		RC0_bit=1;
	BSF        RC0_bit+0, BitPos(RC0_bit+0)
;PARPADEO_LED_PIC16F877A.c,6 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;PARPADEO_LED_PIC16F877A.c,7 :: 		RC0_bit=0;
	BCF        RC0_bit+0, BitPos(RC0_bit+0)
;PARPADEO_LED_PIC16F877A.c,8 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;PARPADEO_LED_PIC16F877A.c,9 :: 		}
	GOTO       L_main0
;PARPADEO_LED_PIC16F877A.c,10 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
