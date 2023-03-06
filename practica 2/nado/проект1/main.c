#include <8051.h>
void main()
{
unsigned char i,j; 
unsigned char massiv [6]=
{ 
0xF9,
//0xA4,
0xB0,
//0x99,
0x92,
//0x82,
0xF8,
//0x80,
0x90,
0xFF 
};

unsigned char massiv2[11] = {
0xF9,
//0xA4,
0xB0,
//0x99,
0x92,
//0x82,
0xF8,
//0x80,
0x90,
0xFF 
};

//P2=massiv [10];
P1 = 0x00;
//P2=massiv[10];
 while(1)
{
	for(i=0;i<7;i++) 
	{

		if (P10 > 0)
 		{
			 //if(i%3 == 9)
				//	{
				//	i==1;	
				//	for(j=0;j<100;j++){continue;}
				//	}
				//	else {
						P2 = massiv[i];
				for(j=0;j<100;j++){continue;}
				//		}
	     	 
		}
	}
}
//P2=massiv2[10]; 
while(1);
}