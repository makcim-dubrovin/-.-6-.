#include <8051.h>
void msec (int x)//zaderzhka na 10 ms
{
   while(x-->0)
   {
   TH0 = (-10000)>>8;
   TL0 = -10000;
   TR0 = 1;
   do;
   while(TF0==0);
   TF0=0;
   TR0=0;
   }
}

void main()
{
int i;
unsigned char array[9];
TMOD=0x2;
array[0] = 0x0;
	array[1] = 0x1;
	array[2] = 0x2;
	array[3] = 0x4;
	array[4] = 0x8;
	array[5] = 0x10;
	array[6] = 0x20;
	array[7] = 0x40;
	array[8] = 0x80;
	P1=array[0];
	msec(2);
    while(1){
		for(i=1;i<9;i++) //???????????? ???? ?? 1 ?? 8
			{
				if (i==1 || i == 2)
					{
						P1=array[1] + array[2] ;
						msec(20);
					}
				if (i==3 || i == 4)
					{
						P1=array[7] + array[8] ;
						msec(20);
					}
				if (i==5 || i == 6)
					{
						P1=array[3] + array[4] ;
						msec(50);
					}
				if (i==7|| i == 8)
					{
						P1=array[5] + array[6] ;
						msec(50);
					}
			}
			
			
	}	
        

}