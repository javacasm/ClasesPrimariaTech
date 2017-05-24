#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

#define BUTTON 10

//  NUMERO BINARIO B000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001011=11 DECIMAL

const uint8_t SEG_DONE[] = {
	SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,           // d
//	SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,   // O
  SEG_G | SEG_C | SEG_E | SEG_D,                   // o
	SEG_C | SEG_E | SEG_G,                           // n
	SEG_A | SEG_D | SEG_E | SEG_F | SEG_G            // E
	};

const uint8_t SEG_DIED[]={
  SEG_B | SEG_G | SEG_C | SEG_D | SEG_E,
  SEG_C,
  SEG_A | SEG_F | SEG_E | SEG_G | SEG_D,
  SEG_B | SEG_G | SEG_C | SEG_D | SEG_E
};

const uint8_t SEG_GOOD[]={
  SEG_A | SEG_F | SEG_E | SEG_D | SEG_C,
  SEG_G | SEG_C | SEG_E | SEG_D,
  SEG_G | SEG_C | SEG_E | SEG_D,
  SEG_G | SEG_C | SEG_E | SEG_D | SEG_B
};

const uint8_t SEG_PRAT[]={
  SEG_E | SEG_F | SEG_A | SEG_B | SEG_G,
  SEG_E | SEG_G,
  SEG_E | SEG_G | SEG_C | SEG_F | SEG_B | SEG_A,
  0
};

const uint8_t SEG_PRA[]={
  0,
  SEG_E | SEG_F | SEG_A | SEG_B | SEG_G,
  SEG_G,
  0
};

TM1637Display display(CLK, DIO);

void setup()
{
    pinMode(BUTTON,INPUT);
}

int luck;
int experience=10;
int NRanndommm;
int Count=0;
void loop()
{
   
  if( digitalRead(BUTTON)==HIGH ){
    luck=random(1,21);
    NRanndommm=random(1,101);
    //we put 101 and 21 max because is max-1
    if(20==luck){
      display.setSegments(SEG_PRAT);
      delay(1500);
      display.setSegments(SEG_PRA);
      delay(3000);
      display.setSegments(SEG_PRAT);
      delay(1500);
    }
    //display.setSegments(SEG_DONE);
    display.showNumberDec(3, false, 2, 3);
    delay(1000);
    display.showNumberDec(2, false, 2, 3);
    delay(1000);
    display.showNumberDec(1, false, 2, 3);
    delay(1000);
    if((luck+experience)>NRanndommm){
      display.setSegments(SEG_GOOD);
      delay(3000);
    }
    else{
      display.setSegments(SEG_DIED);
      delay(3000);
    }
    if(Count==18){
      experience=random(10,51);
      Count=0;
    }
    else{
      experience+=5;
      Count+=1;
    }
  }
    
