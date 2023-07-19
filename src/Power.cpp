#include "OpenT12.h"

void setPDVoltage(int voltage){
  switch (voltage) {
    case 0: {
      digitalWrite(PD_CFG_0, LOW);
      digitalWrite(PD_CFG_1, LOW);
      digitalWrite(PD_CFG_2, LOW);
    } break;
    case 1: {
      digitalWrite(PD_CFG_0, LOW);
      digitalWrite(PD_CFG_1, LOW);
      digitalWrite(PD_CFG_2, HIGH);
    } break;
    case 2: {
      digitalWrite(PD_CFG_0, LOW);
      digitalWrite(PD_CFG_1, HIGH);
      digitalWrite(PD_CFG_2, HIGH);
    } break;
    case 3: {
      digitalWrite(PD_CFG_0, LOW);
      digitalWrite(PD_CFG_1, HIGH);
      digitalWrite(PD_CFG_2, LOW);
    } break;
    default:
      break;
  }
}

void initPD(void){
  pinMode(PD_CFG_0, OUTPUT);
  pinMode(PD_CFG_1, OUTPUT);
  pinMode(PD_CFG_2, OUTPUT);
}