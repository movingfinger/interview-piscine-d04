#include "header.h"

int isFilled(unsigned int parkingRow)
{
	int fill = parkingRow + 1;
	int res = parkingRow & ~fill;
	return (res);
}
