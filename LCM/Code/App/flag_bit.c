#include "flag_bit.h"

/*
	Power_Flag = 0; Vesc was just powered on
	Power_Flag = 1; Vesc is powered on
	Power_Flag = 2; Vesc boot completed
	Power_Flag = 3; Vesc off, charger supplies power
*/
uint8_t Power_Flag = 0;


/*
	Charge_Flag = 0; Vesc was just powered on
	Charge_Flag = 1; ready to charge
	Charge_Flag = 2; charging 
	Charge_Flag = 3; battery fully charged
*/
uint8_t Charge_Flag = 0;


///*
//	VESC_Boot_Flag = 0; Vesc shutdown
//	VESC_Boot_Flag = 1; Vesc boot
//*/
//uint8_t VESC_Boot_Flag = 0;
/*
	Flashlight_Flag = 0; Vesc was just powered on
	Flashlight_Flag = 1;  Vesc is powered on
	Flashlight_Flag = 2; front light white, rear is red (forward facing)
	Flashlight_Flag = 3; rear light white, front is white (backward facing)
	Flashlight_Flag = 4; brightness of the light is 10%
*/
uint8_t Flashlight_Flag = 0;


/*
	Brightness_Flag = 0; Vesc was just powered on
	Brightness_Flag = 1; started adjusting brightness
	Brightness_Flag = 2; completed light adjustment
*/
uint8_t Brightness_Flag = 0;


/*
	WS2812_Display_Flag = 0; Vesc was just powered on
	WS2812_Display_Flag = 1; display power (lightbar?)
	WS2812_Display_Flag = 2; do not power display (lightbar?)
*/
uint8_t WS2812_Display_Flag = 0;


/*
	WS2812_Flag = 0; Vesc was just powered on
	WS2812_Flag = 1; blue lights on the left 5 lightbar lights, right 5 off   adc1>2.5V  adc2<2.5V
	WS2812_Flag = 2; blue lights on the right 5 lightbar lights, left 5 off       adc1<2.5V  adc2>2.5V
	WS2812_Flag = 3; all lights are blue (all 10)                   adc1>2.5V  adc2>2.5V
	WS2812_Flag = 4; all lights are off (all 10)
*/
uint8_t WS2812_Flag = 0;
/*
	Power_Display_Flag = 0; Vesc was just powered on
	Power_Display_Flag = 1; 4.08V~4.2V  10 white lights 
	Power_Display_Flag = 2; 4.05V~4.08V 9 white lights 
	Power_Display_Flag = 3; 3.96V~4.05V 8 white lights 
	Power_Display_Flag = 4; 3.87V~3.96V 7 white lights 
	Power_Display_Flag = 5; 3.78V~3.87V 6 white lights 
	Power_Display_Flag = 6; 3.70V~3.78V 5 white lights 
	Power_Display_Flag = 7; 3.62V~3.70V 4 white lights 
	Power_Display_Flag = 8; 3.50V~3.62V 3 white lights
	Power_Display_Flag = 9; 3.35V~3.50V 2 red lights
	Power_Display_Flag = 10;2.80V~3.35V 1 red light
*/
uint8_t Power_Display_Flag = 0;


/*
	Buzzer_Flag = 0; Vesc was just powered on
	Buzzer_Flag = 1; Buzzer off
	Buzzer_Flag = 2; Buzzer on
*/
uint8_t Buzzer_Flag = 0;
/*
	Usart_Flag = 0; Vesc was just powered on
	Usart_Flag = 1; parsed succesfully
	Usart_Flag = 2; failed / waiting for next parsing
*/
uint8_t Usart_Flag = 0;

/*
	VESC����ʱ��
*/
uint16_t VESC_Boot_Time = 0;

/*
	���������ʱ��
*/
uint16_t Buzzer_Time = 0;
/*
	����ʱ
*/
uint16_t Charge_Time = 0;
/*
	������
*/
uint16_t Flashlight_Time = 0;
/*
	����ʱ��
*/
uint16_t Power_Time = 0;
/*
	����ͨ��
*/
uint16_t Usart_Time = 0;
/*
	ADC����ʱ��
*/
uint16_t ADC_Time = 0;
/*
	�ػ�ʱ�� ��
*/
uint16_t Shutdown_Time_S = 0;
/*
	�ػ�ʱ�� ����
*/
uint8_t Shutdown_Time_M = 0;
/*
	��ص�ѹ
*/
//float Battery_Voltage = 0;
/*
	ADC1
*/
float ADC1_Val = 0;
/*
	ADC2
*/
float ADC2_Val = 0;
/*
	ת��
*/
//long VESC_Rpm = 0;
/*
	ĸ�ߵ���
*/
//float AvgInputCurrent = 0;
/*
	ռ�ձ�
*/
//float DutyCycleNow = 0;
/*
	���ڵ�ѹ
*/
float Charge_Voltage = 0;
/*
	Gear_Position = 0; Vesc was just powered on
	Gear_Position = 1; the headlight is darkest, lightbar brightest (beep 1 time)
	Gear_Position = 2; both medium brightness (beep 2 times)
	Gear_Position = 3; headlight brightest, lightbar darkest (beep 3 times)
*/
uint8_t Gear_Position = 0;
/*
	WS2812����
*/
uint8_t WS2812_Measure = 0;
/*
	������ bpm 60-180 ��Ӧռ�ձ� 70-100
*/
uint8_t Buzzer_Frequency = 0;
/*
	����˫����̤��û���� �����3S
*/
uint16_t Flashlight_Detection_Time = 0;
/*
	����ѹ�ͳ��ĵ�����ԭʼֵ
*/
float Charge_Current = 0;
/*
	0 ����������
	1 ��������ѹ
*/
uint8_t V_I = 1;
/*
	�����ﵽ�ػ��Ĵ���
*/
uint8_t Shutdown_Cnt = 0;
/*
	��������ʱ��
*/
uint16_t Charger_Detection_1ms = 0;

