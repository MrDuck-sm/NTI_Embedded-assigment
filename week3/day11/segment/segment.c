#include<stdio.h>
#include"segment_interface.h"

int main(){
uint8_t GROUP=0,
number[10]={zero, one,two,three,four,five,six,seven,eight,nine},//number in  7 segment
start=4,        //if want to start from specifc num 
 end=8;          //and end it here
 Segment_Init(&GROUP);
DisplayRang(DDRB_Reg,one,eight);

DisplayNumber(&GROUP,&number);
}

void Segment_Init(uint8_t *GroupName)
{
    DDRA_Reg=0XFF;
    DDRB_Reg=0XFF;
    DDRC_Reg=0XFF;
    DDRD_Reg=0XFF;
}

void DisplayNumber(uint8_t *GroupName, uint8_t *Number)
{
    Segment_Init(&GroupName);
  while(1){
     for(int count=0;count<=10;count++){
         for(int loop=0;loop<10;loop++){
        PORTA_Reg=Number[count];//tens
        PORTD_Reg=Number[loop];//ones
        _delay_ms(1000);
        }
        }
     }
  }
        // Display Number from 0 to 9 
        // upgrade will be to 99 



void DisplayRang(uint8_t *GroupName,uint8_t Start , uint8_t End )
{
    while(1){
        for( uint8_t i= Start;i < End;i++)
        {
          DisplayNumber(&PORTB_Reg,&i);//doesnt work like i need it to
          _delay_ms(1000);
        }  
    }
    //Display Range with 1 sec waiting 
}