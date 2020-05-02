#include "header.h"

int carPosition(unsigned int parkingRow)
{
  if (parkingRow == 1)
	  return (0);
  int check = parkingRow + 1;
  if (!(check & parkingRow))
    return (-1);
  int count = 0;
  while (parkingRow)
  {
    if (parkingRow & 1)
      return (count);
    count++;
    parkingRow = parkingRow >> 1;
  }
  return (-1);
}
