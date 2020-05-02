#include "header.h"

int rightmostCar(unsigned int parkingRow)
{
  int count = 0;
  while ((parkingRow & 1) == 0)
  {
    count++;
    parkingRow = parkingRow >> 1;
  }
  return (count);
}
