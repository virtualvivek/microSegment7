#include<reg51.h>

void delay(int delay_val)  //delay in milliseconds
{
  int i,j;
  for(i=0;i<delay_val;i++)
   for(j=0;j<1275;j++);
}

void display_1_counter()
{
 unsigned char i;
 unsigned char arr[10]={0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0x7B};
 P2=0x00;//initialize with common unsigned value
 while(1)
  {
    for(i=0;i<10;i++)
    {
      P2=arr[i];    //assiging HEX value for anode type
      delay(100);   //here delay of 1 second
    }
  }
}

void display_1_even()
{
 unsigned char i;
 unsigned char arr[10]={0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0x7B};
 P2=0x00;//initialize with common unsigned value
 while(1)
  {
    for(i=0;i<10;i++)
    {
      if(i%2==0)
      {
      P2=arr[i];    //assiging HEX value for even digits
      delay(100);    //here delay of 1 second
      }
    }
  }
}


void display_1_odd()
{
 unsigned char i;
 unsigned char arr[10]={0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0x7B};
 P2=0x00;//initialize with common unsigned value
 while(1)
  {
    for(i=0;i<10;i++)
    {
      if(i%2!=0)
      {
      P2=arr[i];    //assiging HEX value for odd digits
      delay(100);    //here delay of 1 second
      }
    }
  }
}


void display_1_timer()   //Reverse counter-> from 9-0 counter
{
 unsigned char i;
 unsigned char arr[10]={0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0x7B};
 P2=0x00;//initialize with common unsigned value
 while(1)
  {
    for(i=9;i>=0;i--)
    {
      P2=arr[i];    //assiging HEX value for anode type
      delay(100);   //here delay of 1 second
    }
  }
}

void main()
{
  
  //Modules for Single 7-SDisplay------
  void display_1_counter();
  void display_1_timer();
  void display_1_odd();
  void display_1_even();
  
}
