#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3

#define BUTTON 10

const uint8_t SEG_DONE[] = {
	SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,           // d
//	SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F, // O
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

const uint8_t SEG_HOLA[]={
  SEG_F | SEG_B | SEG_G | SEG_E | SEG_C,
  SEG_G | SEG_E | SEG_C | SEG_D,
  SEG_F | SEG_E | SEG_D,
  0b01110111 
};

const uint8_t SEG_NOTHING_AIR[]={
  0,
  0,
  0,
  0
};


TM1637Display display(CLK, DIO);

void setup()
{
 
    pinMode(BUTTON,INPUT);
    Serial.begin(9600);
}

float nosemeocurrenada=5.0;
int level=1;
int luck;
float experience=10.0;
int NRanndommm;
void loop()
{
  display.setBrightness(0x0f);
  display.setSegments(SEG_HOLA);
  if( digitalRead(BUTTON)==HIGH ){
    Serial.print("Experiencia = ");
    Serial.println(experience);
    luck=random(1,21);
    Serial.print("luck = ");
    Serial.println(luck);
    NRanndommm=random(1,101);
    Serial.print("Numero random = ");
    Serial.println(NRanndommm);
    //we put 101 and 21 max because is max-1
    if(20==luck){
      display.setSegments(SEG_PRAT);
      delay(1500);
      display.setSegments(SEG_PRA);
      delay(3000);
      display.setSegments(SEG_PRAT);
      delay(1500);
    }
    display.setSegments(SEG_NOTHING_AIR);
    display.showNumberDec(3, false, 1, 3);
    delay(1000);
    display.showNumberDec(2, false, 1, 3);
    delay(1000);
    display.showNumberDec(1, false, 1, 3);
    delay(1000);
    if((luck+experience)>NRanndommm){
      display.setSegments(SEG_GOOD);
      delay(3000);
    }
    else{
      display.setSegments(SEG_DIED);
      delay(3000);
    }
    if(experience>=75){
      level=(level+1);
      experience=10;
      if(level>=5){
        nosemeocurrenada=(nosemeocurrenada/5);
        level=1;
        Serial.println("+nivel+");
      }
    }
    else{
      experience+=(nosemeocurrenada/level);
    }
  }
  else
  {
    Serial.println("No esta pulsado el boton");
    delay(500);
  }
}    
