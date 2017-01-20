//******************************************************************************
//                   
//                           CLOCK FUNCTION FOR MSP430G2553 
//  Description: 
//  Project Name :        CLOCK SYSTEM MSP430
//  Note : 
//  Created day : 25/07/2016                               By : Lê Hùng
//  Last fixed :  25/07/2016                               By : Lê Hùng
//*******************************************************************************

#define _1MHZ      1
#define _8MHZ      8
#define _12MHZ     12
#define _16MHZ     16

void clock_init(unsigned char clock){
  switch(clock){
    case _1MHZ:
      {
        DCOCTL  = 0xC9;
        BCSCTL1 = 0x86;
        BCSCTL2 = 0x00;
        BCSCTL3 = 0x05;
      }
     break;
    case _8MHZ:
      {
        DCOCTL  = 0x95;
        BCSCTL1 = 0x8D;
        BCSCTL2 = 0x00;
        BCSCTL3 = 0x04;
      }
      break;
    case _12MHZ:
      {
        DCOCTL  = 0xA2;
        BCSCTL1 = 0x8E;
        BCSCTL2 = 0x00;
        BCSCTL3 = 0x04;
      }
      break;
    case _16MHZ:
      {
        DCOCTL  = 0x9B;
        BCSCTL1 = 0x8F;
        BCSCTL2 = 0x00;
        BCSCTL3 = 0x04;
      }
      break;
  }
}