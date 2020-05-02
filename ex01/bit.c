#include "header.h"
#include <string.h>
#include <math.h>

char *getAnd(char *a, char *b)
{
	char *res = strdup("0000");
	for (int i = 3; i >= 0; i--)
	{
		int numA = a[i] - '0';
		int numB = b[i] - '0';
		int tmp = 0;
		if (numA == 1 && numB == 1)
			tmp = 1;
		else
			tmp = 0;
		res[i] = tmp + '0';
	}
	return (res);
}

char *getOr(char *a, char *b)
{
	char *res = strdup("0000");
	for (int i = 3; i >= 0; i--)
	{
		int numA = a[i] - '0';
		int numB = b[i] - '0';
		int tmp = 0;
		if (numA == 0 && numB == 0)
			tmp = 0;
		else
			tmp = 1;
		res[i] = tmp + '0';
	}
	return (res);
}

int toInt(char *bits)
{
	int num = 0;
	for (int i = 0; i < 4; i++)
	{
		int tmp = bits[3 - i] - '0';
		num += pow(2, i) * tmp;
	}
	return (num);
}
