#include "header.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

char *getSum(char *a, char *b)
{
	char *res = malloc(sizeof(char) * 7);
	res[6] = '\0';
	int overflow = 0;
	for (int i = 5; i >= 0; i--)
	{
		int numA = a[i] - '0';
		int numB = b[i] - '0';
		int sum = numA + numB + overflow;
		if (sum > 1)
		{
			overflow = 1;
			sum = sum % 2;
		}
		else
			overflow = 0;
		res[i] = sum + '0';
	}
	if (overflow == 1)
		res = strdup("111111");
	return (res);
}

int toInt(char *bits)
{
	int num = 0;
	for (int i = 0; i < 6; i++)
	{
		int tmp = bits[5 - i] - '0';
		num += pow(2, i) * tmp;
	}
	return (num);
}