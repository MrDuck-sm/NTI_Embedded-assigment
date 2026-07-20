#include"animation.h"

void animation();

int main(){
    DDRA_Reg= 0xFF;
    PORTA_Reg=0xFF;
    animation();
//================================
// while(1){
//     PORTA_Reg=0xFF;
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,0);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,1);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,2);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,3);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,4);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,5);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,6);
//     _delay_ms(1000);
//     clearbit(PORTA_Reg,7);
//     _delay_ms(1000);

// }
}
void animation(){
    while(1){
    PORTA_Reg=0xFF;
    _delay_ms(1000);
    clearbit(PORTA_Reg,0);
    _delay_ms(1000);
    clearbit(PORTA_Reg,1);
    _delay_ms(1000);
    clearbit(PORTA_Reg,2);
    _delay_ms(1000);
    clearbit(PORTA_Reg,3);
    _delay_ms(1000);
    clearbit(PORTA_Reg,4);
    _delay_ms(1000);
    clearbit(PORTA_Reg,5);
    _delay_ms(1000);
    clearbit(PORTA_Reg,6);
    _delay_ms(1000);
    clearbit(PORTA_Reg,7);
    _delay_ms(1000);
    //add all led blink for 5 sec
    togglebit(PORTA_Reg,0);
    togglebit(PORTA_Reg,1);
    togglebit(PORTA_Reg,2);
    togglebit(PORTA_Reg,3);
    togglebit(PORTA_Reg,4);
    togglebit(PORTA_Reg,5);
    togglebit(PORTA_Reg,6);
    togglebit(PORTA_Reg,7);
    _delay_ms(1000);
    togglebit(PORTA_Reg,0);
    togglebit(PORTA_Reg,1);
    togglebit(PORTA_Reg,2);
    togglebit(PORTA_Reg,3);
    togglebit(PORTA_Reg,4);
    togglebit(PORTA_Reg,5);
    togglebit(PORTA_Reg,6);
    togglebit(PORTA_Reg,7);
    _delay_ms(1000);
    togglebit(PORTA_Reg,0);
    togglebit(PORTA_Reg,1);
    togglebit(PORTA_Reg,2);
    togglebit(PORTA_Reg,3);
    togglebit(PORTA_Reg,4);
    togglebit(PORTA_Reg,5);
    togglebit(PORTA_Reg,6);
    togglebit(PORTA_Reg,7);
    _delay_ms(1000);
    togglebit(PORTA_Reg,0);
    togglebit(PORTA_Reg,1);
    togglebit(PORTA_Reg,2);
    togglebit(PORTA_Reg,3);
    togglebit(PORTA_Reg,4);
    togglebit(PORTA_Reg,5);
    togglebit(PORTA_Reg,6);
    togglebit(PORTA_Reg,7);
    _delay_ms(1000);
    togglebit(PORTA_Reg,0);
    togglebit(PORTA_Reg,1);
    togglebit(PORTA_Reg,2);
    togglebit(PORTA_Reg,3);
    togglebit(PORTA_Reg,4);
    togglebit(PORTA_Reg,5);
    togglebit(PORTA_Reg,6);
    togglebit(PORTA_Reg,7);
    _delay_ms(1000);


}
}
