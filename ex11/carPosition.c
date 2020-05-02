#include "header.h"

int checkMultiple2(unsigned int num)
{
  if (num == 0)
	return (-1);
  int count = 0;
  while (num != 1)
  {
    if (num % 2)
      return (-1);
    num /= 2;
    count++;
  }
  return (count);
}

int carPosition(unsigned int parkingRow)
{
  int count = checkMultiple2(parkingRow);
  return (count);
}
