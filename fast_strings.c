#include<stdio.h>
/* 
 *  Author : Fahad Naeem
 *  Date : Jan 2, 2017
 *  Processor friendly function which gets the len of the string
 * Parameters:
 *  Input : C String
 *  Return: Integer value contains the length of C String
 */
int get_len(char *str)
{
	int str_len=0;
	while(*(str)++!='\0')
	str_len++;	
	return str_len;
}
