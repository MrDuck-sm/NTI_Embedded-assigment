#include"led_driver_interface.h"
#include"led_driver_private.h"

void main(){
    uint8_t group=0,
    pinNum=0,
    connectioType=0;
    Led_Init(&group,&pinNum);
    Led_on(group ,pinNum , connectioType);
}
void Led_Init(uint8_t *GroupName , uint8_t *PinNumber){
    DDRA_Reg=0XFF;
    PORTA_Reg=0xFF;
    DDRB_Reg=0XFF;
    PORTB_Reg=0xFF;
    DDRC_Reg=0XFF;
    PORTC_Reg=0xFF;
    DDRD_Reg=0XFF;
    PORTD_Reg=0xFF;
}
void Led_on(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType){
    while(1){ 
        ConnectionType=readbit(PORTB_Reg,2);
        ConnectionType=readbit(PORTD_Reg,2);
        ConnectionType=readbit(PORTC_Reg,4);
    if(ConnectionType==SourceConnection)
        {
            setbit(PORTB_Reg,2);
            setbit(PORTD_Reg,2);
            setbit(PORTC_Reg,4);

        }
        else if (ConnectionType==SinkConnection)
        {
            clearbit(PORTB_Reg,2);
            clearbit(PORTD_Reg,2);
            clearbit(PORTC_Reg,4);

            //the led connected to vcc from side and the micro from the other
            //so it will take 0from mc 
        }
    }
}

void Led_off(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType){
    while(1){ 
        ConnectionType=readbit(PORTB_Reg,2);
        ConnectionType=readbit(PORTD_Reg,2);
        ConnectionType=readbit(PORTC_Reg,4);
    if(ConnectionType==SourceConnection)
        {
            clearbit(PORTB_Reg,2);
            clearbit(PORTD_Reg,2);
            clearbit(PORTC_Reg,4);

        }
        else if (ConnectionType==SinkConnection)
        {
            setbit(PORTB_Reg,2);
            setbit(PORTD_Reg,2);
            setbit(PORTC_Reg,4);

            //the led connected to vcc from side and the micro from the other
            //so it will take 0from mc 
        }
    }
}
