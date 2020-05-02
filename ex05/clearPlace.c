#include "header.h"
#include <math.h>

unsigned int clearPlace(unsigned int parkingRow, int pos)
{
	int clear = pow(2, pos);
	return (parkingRow ^ clear);
}
