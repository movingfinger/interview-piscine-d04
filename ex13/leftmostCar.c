#include "header.h"

int leftmostCar(unsigned int parkingRow)
{
  int count = 0;
  while (parkingRow != 1)
  {
    count++;
    parkingRow = parkingRow >> 1;
  }
  return (count);
}
