#include "stm32f10x.h"  // Device header
#include "Delay.h"
#include "OLED.h"
#include "MyDma.h"
#include "ADC.h"
uint16_t DataA[5]={7,2,3,4,5};


int main(void)
{
	OLED_Init();
	
	AD_Init();
	
	MyDma_Init();     
	OLED_ShowString(1,1,"AD0:");
	OLED_ShowString(2,1,"AD1:");
	OLED_ShowString(3,1,"AD2:");
	OLED_ShowString(4,1,"AD3:");
	
	while(1)
	{
		
		//AD_ON();
		
		
		OLED_ShowNum(1,5,DataA[0],4);
		OLED_ShowNum(2,5,DataA[1],4);
		OLED_ShowNum(3,5,DataA[2],4);
		OLED_ShowNum(4,5,DataA[3],4);
		
		
		
		Delay_ms(100);
		
	}
}
