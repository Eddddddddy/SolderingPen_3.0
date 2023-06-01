#ifndef sys_Counter_H
#define sys_Counter_H
#include <stdint.h>
#include "Type.h"

#define ROTARY_TYPE 1

extern uint8_t SYSKey;
extern bool Counter_LOCK_Flag;

void sys_RotaryInit(void);
void sys_Counter_Set(double min, double max, double step, double c);
void sys_Counter_SetVal(double c);
void RotaryUp(void);
void RotaryDown(void);

void sys_Counter_click(Button2 &b);
void sys_Counter_doubleclick(Button2 &b);
void sys_Counter_tripleclick(Button2 &b);
void sys_Counter_longclick(Button2 &b);
void sys_Counter_IRQHandler(void);
double sys_Counter_Get(void);
uint8_t sys_Counter_Change(void);
void sys_PN_click(Button2 &b);
void IRAM_ATTR ButtonTimer();

void Clear_RButton_FIFO(void);
uint8_t sys_KeyProcess(void);
#endif