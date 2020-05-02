#include "header.h"
#include <math.h>

int getPlace(unsigned int parkingRow, int pos)
{
	unsigned int check = pow(2,pos);
	return (check & parkingRow);
}
