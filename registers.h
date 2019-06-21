// General Interrupt Register
#define SREG *((volatile u8*) 0x5F)
// Direction Registers
#define DDRA *((volatile u8 *) 0x3A)
#define DDRB *((volatile u8 *) 0x37)
#define DDRC *((volatile u8 *) 0x34)
#define DDRD *((volatile u8 *) 0x31)
//Port Register
#define PORTA *((volatile u8 *) 0x3B)
#define PORTB *((volatile u8 *) 0x38)
#define PORTC *((volatile u8 *) 0x35)
#define PORTD *((volatile u8 *) 0x32)
//Pin Registers
#define PINA *((volatile u8 *) 0x39)
#define PINB *((volatile u8 *) 0x36)
#define PINC *((volatile u8 *) 0x33)
#define PIND *((volatile u8 *) 0x30)
//Digital External Interrupt Register
#define MCUCR *((volatile u8*) 0x55)
#define GICR  *((volatile u8*) 0x5B)
//ADC Registers
#define ADMUX *((volatile u8*)0x27)
#define ADCSRA *((volatile u8*)0x26)
#define ADCL *((volatile u8*)0x24)
#define ADCH *((volatile u8*)0x25)
#define SFIOR *((volatile u8*)0x50)
//TIMER REGISTER
#define TCCR0 *((volatile u8 *) 0x53)
#define TCCR1A *((volatile u8 *) 0x4F)
#define TCCR1B *((volatile u8 *) 0x4E)
#define TCCR2 *((volatile u8 *) 0x45)
#define TIMSK *((volatile u8 *) 0x59)
#define OCR0  *((volatile u8 *) 0x5C)
#define OCR1AL *((volatile u8 *) 0x4A)
#define OCR1AH *((volatile u8 *) 0x4B)
#define OCR1BL *((volatile u8 *) 0x48)
#define OCR1BH *((volatile u8 *) 0x49)
#define OCR2 *((volatile u8 *) 0x43)
#define TIFR  *((volatile u8 *) 0x58)
#define ICR1L *((volatile u8 *) 0x46)
#define ICR1H *((volatile u8 *) 0x47)
#define TCNT2 *((volatile u8 *) 0x44)
#define ICR1 *((volatile u16 *) 0x46)
// watch dog timer registers
#define MCUCSR *((volatile u8 *) 0x54)
#define WDTCR *((volatile u8 *) 0x41)
//SPI Register
#define SPCR *((volatile u8 *) 0x2D)
#define SPSR *((volatile u8 *) 0x2E)
#define SPDR *((volatile u8 *) 0x2F)


