/*******************************************************
This program was created by the CodeWizardAVR V3.30 
Automatic Program Generator
� Copyright 1998-2017 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 12/27/2017
Author  : 
Company : 
Comments: 


Chip type               : ATtiny2313V
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Tiny
External RAM size       : 0
Data Stack size         : 32
*******************************************************/

#include <io.h>
#include <delay.h>
// Declare your global variables here
void fun(int);
void main(void)
{
// Declare your local variables here
int a=0,i;

// Crystal Oscillator division factor: 1
#pragma optsize-
CLKPR=(1<<CLKPCE);
CLKPR=(0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0);
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

// Input/Output Ports initialization
// Port A initialization
// Function: Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA2) | (0<<DDA1) | (0<<DDA0);
// State: Bit2=T Bit1=T Bit0=T 
PORTA=(0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port D initialization
// Function: Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);
// State: Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=0xFF
// OC0A output: Disconnected
// OC0B output: Disconnected
TCCR0A=(0<<COM0A1) | (0<<COM0A0) | (0<<COM0B1) | (0<<COM0B0) | (0<<WGM01) | (0<<WGM00);
TCCR0B=(0<<WGM02) | (0<<CS02) | (0<<CS01) | (0<<CS00);
TCNT0=0x00;
OCR0A=0x00;
OCR0B=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Disconnected
// OC1B output: Disconnected
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (0<<CS10);
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=(0<<TOIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (0<<ICIE1) | (0<<OCIE0B) | (0<<TOIE0) | (0<<OCIE0A);

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// Interrupt on any change on pins PCINT0-7: Off
GIMSK=(0<<INT1) | (0<<INT0) | (0<<PCIE);
MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);

// USI initialization
// Mode: Disabled
// Clock source: Register & Counter=no clk.
// USI Counter Overflow Interrupt: Off
USICR=(0<<USISIE) | (0<<USIOIE) | (0<<USIWM1) | (0<<USIWM0) | (0<<USICS1) | (0<<USICS0) | (0<<USICLK) | (0<<USITC);

// USART initialization
// USART disabled
UCSRB=(0<<RXCIE) | (0<<TXCIE) | (0<<UDRIE) | (0<<RXEN) | (0<<TXEN) | (0<<UCSZ2) | (0<<RXB8) | (0<<TXB8);

// Analog Comparator initialization
// Analog Comparator: Off
// The Analog Comparator's positive input is
// connected to the AIN0 pin
// The Analog Comparator's negative input is
// connected to the AIN1 pin
ACSR=(1<<ACD) | (0<<ACBG) | (0<<ACO) | (0<<ACI) | (0<<ACIE) | (0<<ACIC) | (0<<ACIS1) | (0<<ACIS0);
// Digital input buffer on AIN0: On
// Digital input buffer on AIN1: On
DIDR=(0<<AIN0D) | (0<<AIN1D);



DDRB=255;
DDRD=255;
DDRA.2=1;
PORTA.2=0;


        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=1;
        PORTB.3=0;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=1;
        PORTB.7=0;
        
        
        PORTD.0=1;
        PORTD.1=0;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=1;
        PORTD.6=1;

while (1)
      {   
       p:  PORTB.7=0;
       if(PINA.0==1&&PINA.1==0)    //to increase number
        {   
            a++;   
            if(a>99)
            {
                a=99;
            }
            fun(a);
            for(i=0;i<10;i++)
            {
                delay_ms(50); 
                if(PINA.0==0&&PINA.1==0)
                {
                    goto p;
                }  
            }
            if(PINA.0==1&&PINA.1==0)       //to increase number continously
            {
                while(PINA.0==1&&PINA.1==0)
                {
                    a++;
                    if(a>99)
                    {
                        a=99;
                    }
                    fun(a);
                    delay_ms(100);
                }
            } 
        }
        else if(PINA.0==0&&PINA.1==1)   //to decrease number
        {                
            a--;
            if(a<0)
            {
                a=0;
            }
            fun(a);
            for(i=0;i<10;i++)
            {
                delay_ms(50); 
                if(PINA.0==0&&PINA.1==0)
                {
                    goto p;
                }  
            }
            if(PINA.0==0&&PINA.1==1)     //to decrease number continously
            {
                while(PINA.0==0&&PINA.1==1)
                {
                    a--;
                    if(a<0)
                    {
                        a=0;
                    }
                    fun(a);
                    delay_ms(100);
                }
            } 
        } 
        if((PINA.0==0&&PINA.1==0)&&a!=0)  //to start countdown
        {    
            while(PINA.0==0&&PINA.1==0)
            {   
                for(i=0;i<20;i++)
                {
                    delay_ms(50);
                    if(i==10){
                        PORTB.7=1;
                    } 
                    if(PINA.0==1||PINA.1==1)
                    {
                        goto p;
                    }  
                }
                a--;
                fun(a);
                if(a==0)                //to start buzzer
                {             
                    PORTB.7=0;
                    PORTA.2=1;
                    delay_ms(3000);
                    PORTA.2=0;
                    break;
                }  
            }
        }     
      }
}
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void fun(int x)
{
    if(x/10==0)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=1;
        PORTB.3=0;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=1;
    }     
     else if(x/10==1)
    {
        PORTB.0=1;
        PORTB.1=0;
        PORTB.2=0;
        PORTB.3=0;
        PORTB.4=0;
        PORTB.5=0;
        PORTB.6=1;
    }
     else if(x/10==2)
    {
        PORTB.0=0;
        PORTB.1=1;
        PORTB.2=1;
        PORTB.3=1;
        PORTB.4=0;
        PORTB.5=1;
        PORTB.6=1;
    }
     else if(x/10==3)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=0;
        PORTB.3=1;
        PORTB.4=0;
        PORTB.5=1;
        PORTB.6=1;
    }
     else if(x/10==4)
    {
        PORTB.0=1;
        PORTB.1=0;
        PORTB.2=0;
        PORTB.3=1;
        PORTB.4=1;
        PORTB.5=0;
        PORTB.6=1;
    }
     else if(x/10==5)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=0;
        PORTB.3=1;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=0;
    }
     else if(x/10==6)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=1;
        PORTB.3=1;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=0;
    }
     else if(x/10==7)
    {
        PORTB.0=1;
        PORTB.1=0;
        PORTB.2=0;
        PORTB.3=0;
        PORTB.4=0;
        PORTB.5=1;
        PORTB.6=1;
    }
     else if(x/10==8)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=1;
        PORTB.3=1;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=1;
    }
     else if(x/10==9)
    {
        PORTB.0=1;
        PORTB.1=1;
        PORTB.2=0;
        PORTB.3=1;
        PORTB.4=1;
        PORTB.5=1;
        PORTB.6=1;
    }
    if(x%10==0)
    {
        PORTD.0=1;
        PORTD.1=0;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=1;
        PORTD.6=1;
    }  
     else if(x%10==1)
    {
        PORTD.0=0;
        PORTD.1=0;
        PORTD.2=0;
        PORTD.3=1;
        PORTD.4=0;
        PORTD.5=0;
        PORTD.6=1;
    }
     else if(x%10==2)
    {
        PORTD.0=0;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=1;
        PORTD.6=0;
    }
     else if(x%10==3)
    {
        PORTD.0=0;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=0;
        PORTD.6=1;
    }
     else if(x%10==4)
    {
        PORTD.0=1;
        PORTD.1=1;
        PORTD.2=0;
        PORTD.3=1;
        PORTD.4=0;
        PORTD.5=0;
        PORTD.6=1;
    }
     else if(x%10==5)
    {
        PORTD.0=1;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=0;
        PORTD.4=1;
        PORTD.5=0;
        PORTD.6=1;
    }
     else if(x%10==6)
    {
        PORTD.0=1;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=0;
        PORTD.4=1;
        PORTD.5=1;
        PORTD.6=1;
    }            
     else if(x%10==7)
    {
        PORTD.0=0;
        PORTD.1=0;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=0;
        PORTD.5=0;
        PORTD.6=1;
    }
     else if(x%10==8)
    {
        PORTD.0=1;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=1;
        PORTD.6=1;
    }
     else if(x%10==9)
    {
        PORTD.0=1;
        PORTD.1=1;
        PORTD.2=1;
        PORTD.3=1;
        PORTD.4=1;
        PORTD.5=0;
        PORTD.6=1;
    }
   
}


      


