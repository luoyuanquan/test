#include "sys.h"
#include "delay.h"
#include "usart.h"

volatile int c=0x34;
int main(void)
{
	static float b=10.8;
	char a='a';
	u8 t=0;
	Stm32_Clock_Init(9);
	delay_init(72);
	uart_init(72,9600);
	while(1)
	{
		printf("t:%d\n",t);
		printf("t:%d\n",a);
		//printf("t:%d\n",b);
		printf("t:%d\n",c);
		delay_ms(500);
		t++;
	}
}