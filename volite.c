#include <stdio.h>
int main(int argc, const char *argv[])
{
	volatile unsigned int *p=(volatile unsigned int *)0xbfdfa8ac; 
	*p=0x12345678;
	return 0;
}
