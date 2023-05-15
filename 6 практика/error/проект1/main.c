#include <8051.h>
void tput (unsigned char cl)
{
SBUF = cl;
while(!TI);
TI=0;
}

void main()
{
int i;
unsigned char src[]={'a','b','c'};

PCON = 0x40;
TMOD = 0x20;

TR1 = 1;
TH1 = 0xFA;

for (i = 0; i<3; i++)
{
ACC = src[i];
SCON = 0x60;
tput (src[i]);
}
while(1){}
}
