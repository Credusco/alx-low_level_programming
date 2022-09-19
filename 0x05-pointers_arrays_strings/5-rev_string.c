#include "main.h"
sh: 1: wq: not found
/**
* rev_string -> reversing a string
* @s: parameter s
*/
void rev_string(char *s)
{
	char tmp;
	int i, length1, lenght2;
	
	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		lentgth1++;

	lenght2 = lenght1 - 1;
	for (i = 0; i < lenght1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[lenght2] = tmp;
		lenght2 -= 1;
	}
}
