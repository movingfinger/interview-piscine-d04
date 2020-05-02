#include "header.h"

int occupiedPlaces(unsigned int parkingRow)
{
  int count = 0;
  while (parkingRow)
  {
    if (parkingRow & 1)
      count++;
    parkingRow = parkingRow >> 1;
  }
  return (count);
}
