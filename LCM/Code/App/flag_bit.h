#ifndef __FLAG_BIT_H
#define __FLAG_BIT_H

#include "hk32f030m.h"

extern uint8_t Power_Flag;
extern uint8_t Charge_Flag;
extern uint8_t VESC_Boot_Flag;
extern uint8_t Flashlight_Flag;
extern uint8_t Brightness_Flag;
extern uint8_t Lightbar_Mode_Flag;
extern uint8_t Footpad_Activation_Flag;
extern uint8_t Power_Display_Flag;
extern uint8_t Buzzer_Flag;
extern uint8_t Usart_Flag;
extern uint16_t VESC_Boot_Time;
extern uint16_t Buzzer_Time;
extern uint16_t Charge_Time;
extern uint16_t Flashlight_Time;
extern uint16_t Power_Time;
extern uint16_t Usart_Time;
extern uint16_t ADC_Time;
extern uint16_t Shutdown_Time_S;
extern uint8_t Shutdown_Time_M;
// extern float Battery_Voltage;
extern float ADC1_Val;
extern float ADC2_Val;
// extern long VESC_Rpm;
// extern float AvgInputCurrent;
// extern float DutyCycleNow;
extern float Charge_Voltage;
extern uint8_t Light_Profile;
extern uint8_t WS2812_Measure;
extern uint8_t Buzzer_Frequency;
extern uint16_t Flashlight_Detection_Time;
extern float Charge_Current;
extern uint8_t V_I;
extern uint8_t Shutdown_Cnt;
extern uint16_t Charger_Detection_1ms;
extern uint16_t Main_Brightness;
//Config
extern uint8_t Config_Cell_Type;          
extern uint8_t Config_Boot_Animation;
extern uint8_t Config_Buzzer;
#endif
