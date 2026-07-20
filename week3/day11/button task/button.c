/*it is sink to source for the led 
meaning led to vcc and mc.
the button is pull down
*/
#include"button_interface.h"

// void drive(uint8_t *group,uint8_t *pin);
// void onOff(uint8_t group,uint8_t pin,uint8_t state);

int main(){
    uint8_t state=0,
    group=0,
    pins=0;
   // drive(&group,&pins);
    //onOff(group,pins,state);
    //===========================================

    //THE LED TALL SIDE TO THE MICRO 

    clearbit(DDRC_Reg,0);//input
    setbit(DDRD_Reg,3);//output
    setbit(DDRB_Reg,0);//output

    while(1){
    state= readbit(PINC_Reg,0);
   if(state==1){
    clearbit(PORTD_Reg,3);
    clearbit(PORTB_Reg,0);
   }
   else{
    setbit(PORTD_Reg,3);
    setbit(PORTB_Reg,0);
   }
}
}


void drive(uint8_t *group,uint8_t *pin){
    clearbit(DDRC_Reg,0);//input
    setbit(DDRD_Reg,3);//output
    setbit(DDRB_Reg,0);//output
}
/*
1- we clear the switch 
2-we read the switch
3-if switch=1 sit led 
*/
void onOff(uint8_t group,uint8_t pin,uint8_t state){
    while(1){
    state= readbit(PINC_Reg,0);
   if(state==1){
    clearbit(PORTD_Reg,3);
    clearbit(PORTB_Reg,0);
   }
   else{
    setbit(PORTD_Reg,3);
    setbit(PORTB_Reg,0);
   }
}
}