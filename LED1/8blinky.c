#include<lpc21xx.h>
void delay_ms(int ms)
{
unsigned int i;
for(;ms>0;ms--)
for(i=12000;i>0;i--);
}

int main(){
unsigned int i;
IODIR0=0x000000FF;
IOSET0=0x000000FF;
while(1){
IOCLR0=0x000000FF;
delay_ms(500);
IOSET0=0x000000FF;
delay_ms(500);
}
}
