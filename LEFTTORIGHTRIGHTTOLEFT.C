#include<lpc21xx.h>
void delay_ms(int ms)
{
unsigned int i;
for(;ms>0;ms--)
for(i=12000;i>0;i--);
}

int main(){
unsigned int i,j;
IODIR0=0x000000FF;
IOSET0=0x000000FF;
for(i=7,j=0;i>=0;i--,j++){
IOCLR0=(1<<j);
IOCLR0=(1<<i);
delay_ms(500);
IOSET0=(1<<i);
IOSET0=(1<<j);
delay_ms(500);
}
}
