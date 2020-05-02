#include "header.h"

int longestSequence(unsigned int parkingRow)
{
  int count = 0;
  int max = 0;
  while (parkingRow)
  {
    if ((parkingRow & 1) == 1)
      count++;
    else
    {
      max = count;
      count = 0;
    }
    parkingRow = parkingRow >> 1;
  }
  max = count > max ? count : max;
  return (max);
}
