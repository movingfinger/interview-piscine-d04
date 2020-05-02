#include "header.h"
#include <math.h>

unsigned int setPlace(unsigned int parkingRow, int pos)
{
	int place = pow(2, pos);
	return (place | parkingRow);
}
