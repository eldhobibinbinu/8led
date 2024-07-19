//LED
#include<LPC214X.h>
void delay(unsigned int count);
unsigned int j;
int main()
{
  IODIR0|=(1<<0);
	 IODIR0|=(1<<1);
	IODIR0|=(1<<2);
	IODIR0|=(1<<3);
	 IODIR0|=(1<<4);
	IODIR0|=(1<<5);
IODIR0|=(1<<6);
	 IODIR0|=(1<<7);
	
	
	IOSET0|=(1<<0);
	delay (200000);
	IOCLR0|=(1<<0);
	delay (200000);
	
	IOSET0|=(1<<0);
	delay (200000);
	IOSET0|=(1<<1);
	delay (200000);
	IOCLR0|=(1<<0);
	IOCLR0|=(1<<1);
	delay (200000);	
	while(1){ 
	
	}
		return 0;
} 
void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}