
#include "msp430g2553.h"
#include "clock.h"
#include "G_LCD.h"



	
     
int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  clock_init(_16MHZ);
  config_glcd();
  //config_ds1307(00,38,20,1,6,16);
  //I2C_USCI_Init(DS1307_ADDRESS);
  //I2C_USCI_Write_Byte(0x07,0x10);
  //unsigned int giay,phut,gio,ngay,thang,nam;
  lcd_image24x24(4,13,5);
  while(1){
        //read_ds1307(&giay,&phut,&gio,&ngay,&thang,&nam);
        lcd_gotoxy(0,0);
        lcd_puts("Hi! Le Hung");
        lcd_gotoxy(0,1);
        
		//lcdInt(gio);    lcd_putchar(':');
        //lcdInt(phut);   lcd_putchar(':');
        //if(giay<10){
        //      lcd_putchar('0');
        //      lcdInt(giay);
        //}
        //else
        //      lcdInt(giay);
        
        lcd_gotoxy(0,2);
        //lcdInt(ngay); lcd_putchar('/');
        //lcdInt(thang); lcd_putchar('/');
        //lcd_puts("2016");
        lcd_image24x24(7,0,5);
        lcd_image24x24(8,6,5);
        lcd_gotoxy(13,4); 
        lcd_puts("37*C"); 
        
//        for(int i=1;i<7;i++){
//            lcd_image24x24(i,13,5);
//            delay1m(1000);
//        }     
      }
}
