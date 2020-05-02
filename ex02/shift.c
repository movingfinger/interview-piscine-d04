#include "header.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

char *rightShift(char *bin, int k)
{
  char *res = strdup(bin);
  int size = strlen(bin);
  for (int i = 0; i < size - k; i++)
    res[size - 1 - i] = bin[size - 1 - k - i];
  for (int i = 0; i < k; i++)
    res[i] = '1';
  return (res);
}

char *leftShift(char *bin, int k)
{
  char *res = strdup(bin);
  int size = strlen(bin);
  for (int i = 0; i < size - k; i++)
    res[i] = res[k + i];
  for (int i = 0; i < k; i++)
	  res[size - 1 - i] = '0';
	  return (res);
}

void negative2positive(char *bits, int n)
{
  for (int i = 0; i < n - 1; i++)
    if (bits[i] == '0')
      bits[i] = '1';
    else
      bits[i] = '0';
}

int binary2Int(char *bits, int start, int end)
{
	int num = 0;
	int power = 0;
  	for (int i = end; i >= start; i--)
  	{
		power =  pow(2,end - i) * (bits[i] - '0');
		num += power;
	}
	return (num);
}

int toInt(char *bits)
{
  int num = 0;
  if (bits[0] == '0')
  {
    num = binary2Int(bits, 1, 5);
  }
  else
  {
	char *tmp = strdup(bits);
    negative2positive(tmp, 6);
    num = binary2Int(tmp, 1, 5) * -1;
  }
  return (num);
}
