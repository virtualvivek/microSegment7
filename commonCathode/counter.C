#include<reg51.h>

//this module is build for single 7-segment display (0-9)

void delay(int delay_val)  //delay in milliseconds
{
  int i,j;
  for(i=0;i<delay_val;i++)
   for(j=0;j<1275;j++);
}

void main()
{
 unsigned char i;
 unsigned char arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
 P2=0x00;//initialize with common unsigned value
 while(1)
  {
    for(i=0;i<10;i++)
    {
      P2=arr[i];
      delay(100); //here delay of 1 second
    }
  }
}
