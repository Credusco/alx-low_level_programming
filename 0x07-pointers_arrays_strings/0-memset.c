#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * 0s: adrress to memory block
 * 0b: char to be used
 * 0n: number of bytes to be used
 *
 * Return: poimter to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
