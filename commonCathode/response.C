#include <avr/io.h>
#include <vlanguage.h>


void say_hellow()
  {
    //outputs HELLOW to the system
    PORTA = lang[24]; //H
    PORTB = lang[21]; //E
    PORTC = lang[28]; //L
    PORTD = lang[28]; //L
    PORTD = lang[31]; //O
    PORTD = lang[39]; //W
  }

void say_echo()
  {
    //outputs ECHO to the system
    PORTA = lang[21]; //E
    PORTB = lang[19]; //C
    PORTC = lang[24]; //H
    PORTD = lang[31]; //O
  }

void say_on()
  {
    //outputs ON to the system
    PORTA = lang[31]; //O
    PORTB = lang[30]; //N
  }

void say_off()
  {
    //outputs OFF to the system
    PORTA = lang[31]; //O
    PORTB = lang[22]; //F
    PORTC = lang[22]; //F
  }


void say_start()
  {
    //outputs Start to the system
    PORTA = lang[35]; //S
    PORTB = lang[68]; //t
    PORTC = lang[17]; //A
    PORTD = lang[66]; //r
    PORTE = lang[68]; //t
  }


void say_end()
  {
    //outputs END to the system
    PORTA = lang[21]; //E
    PORTB = lang[62]; //n
    PORTC = lang[52]; //d
  }


void say_pause()
  {
    //outputs END to the system
    PORTA = lang[32]; //P
    PORTB = lang[17]; //A
    PORTC = lang[37]; //U
    PORTD = lang[35]; //S
    PORTE = lang[21]; //E
  }


void say_go()
  {
    //outputs END to the system
    PORTA = lang[23]; //G
    PORTB = lang[63]; //o
  }


void say_up()
  {
    //outputs END to the system
    PORTA = lang[37]; //U
    PORTB = lang[32]; //P
  }


void say_loop()
  {
    //outputs END to the system
    PORTA = lang[28]; //L
    PORTB = lang[31]; //O
    PORTB = lang[31]; //O
    PORTB = lang[32]; //P
  }
