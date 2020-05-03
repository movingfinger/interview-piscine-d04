#include "header.h"

int addOne(int num)
{
	int mask = 1;
	while (num & mask)
	{
		num &= ~mask;
		mask <<= 1;
	}
	num |= mask;
	return (num);
}

int leftmostCar(unsigned int parkingRow)
{
  int count = 0;
  while (parkingRow != 1)
  {
    count = addOne(count);
    parkingRow = parkingRow >> 1;
  }
  return (count);
}
