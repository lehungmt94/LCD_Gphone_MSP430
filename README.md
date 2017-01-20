# LCD_Gphone_MSP430

Email: lehungmt94@gmail.com 
Facebook: facebook.com/mculearning 
Website: mculearning.wordpress.com 
GitHub: github.com/lehungmt94 

# Giới thiệu
LCD Gphone library là bộ thư viện giúp cho MSP430G2553 có thể điều khiển LCD thông qua Hardware SPI.


#Chú ý
- Project này được tạo trên IAR 
- File "so_do_chan_va_nguyen_ly.PDF" có đầy đủ sơ đồ chân
- File "LCDAssistant.exe" hỗ trợ vẽ icon trên LCD các ví dụ vẽ icon có sẵn trong file thư viện

# Kết nối LCD với MSP430G2553 

-CS		BIT3 //Chon chip P2.3
-SDA	    BIT0 //Data SPI P2.0
-AO      BIT1 //Chot du lieu Command va Data (C/D) P2.1
-SCK	    BIT2 //Clock SPI  P2.2