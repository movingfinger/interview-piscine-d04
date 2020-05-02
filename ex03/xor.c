#include "header.h"
#include <math.h>
#include <string.h>

char *getXor(char *a, char *b)
{
	char *res = strdup("000000");
	for (int i = 0; i < 6; i++)
	{
		if (a[i] != b[i])
			res[i] = '1';
		else
			res[i] = '0';
	}
	return (res);
}

int toInt(char *bits)
{
	int num = 0;
	int p = 0;
	int size = strlen(bits);
	for (int i = 0; i < 6; i++)
	{
		p = bits[size - 1 - i] - '0';
		num += pow(2,i) * p; 
	}
	return (num);
}
