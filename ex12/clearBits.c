#include "header.h"
#include <math.h>

unsigned int clearBits(unsigned int parkingRow, int n)
{
  int clear = ~(int)pow(2, n) + 1;
  return (parkingRow & clear);
}
