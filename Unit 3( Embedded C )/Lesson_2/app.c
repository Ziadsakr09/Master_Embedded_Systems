#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:Ziad";
unsigned char const string_buffer2 [100] = "learn-in-depth:Ziad";
void  main(void)
{
	Uart_Send_string(string_buffer);
}