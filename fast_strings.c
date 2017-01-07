#include<stdio.h>
int get_len(char *str)
{
	int str_len=0;
	while(*(str)++!='\0')
	str_len++;	
	return str_len;
}
