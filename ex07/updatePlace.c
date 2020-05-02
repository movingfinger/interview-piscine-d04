#include "header.h"
#include <math.h>

unsigned int updatePlace(unsigned int parkingRow, int pos, int value)
{
	int update = pow(2, pos);
	if (value == 0)
		return (parkingRow ^ update);
	else
		return (parkingRow | update);
}
