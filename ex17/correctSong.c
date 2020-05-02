#include "header.h"
#include <math.h>

void	correctSong(struct s_bit *bit, int l, int row, int col, int dist)
{
	if (col > l)
		return ;
	for (int i = row; i < row + dist; i++)
		bit->arr[i] = pow(2, col);
}
