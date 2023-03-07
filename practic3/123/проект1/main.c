#include <8051.h>
void str2line(char*str, int lenght, int spaces)
{
	unsigned short i;
		for(i=0; i<spaces; i++)
		{
			P0 = ' ';
			P2 = 0x3;
			P2 = 0x2;
		}

		for(i=(spaces<0)? spaces* -1:0; i<lenght + 1; i++)
		{
			P0 = str[i];
			P2 = 0x3;
			P2 = 0x2;
		}

}
void main()
{

unsigned int i,j, lenght;
unsigned char *str="Hello!";
unsigned char *str2="2nd line";
unsigned short spaces = 0, maxDigit = 20;
spaces = 20 - 8;
while(1)
{
P0 = 0x38;
P2 = 0x1;
P2 = 0x0;
P0 = 0x86;
P2 = 0x1;
P2 = 0x0;
for(j=0;j<6;j++) //LCD 1
{
P0 = str[j];
P2 = 0x3;                           
P2 = 0x2;
}
P0 = 0xC0;
P2 = 0x1;
P2 = 0x0;
str2line(str2,8,spaces);
spaces--;
}
;
}