#include "header.h"
#include <stdlib.h>

int pow2(int n)
{
	if (n == 1)
		return (0);
	int res = 0;
	while (n != 1)
	{
		res++;
		n /= 2;
	}
	return (res);
}

int	**pianoDecompress(struct s_bit *bit, int l)
{
	int **res = malloc(sizeof(int *) * bit->n);
	for (int i = 0; i < bit->n; i++)
	{
		res[i] = malloc(sizeof(int) * l);
		int num = pow2(bit->arr[i]);
		for (int j = 0; j < l; j++)
			res[i][j] = 0;
		res[i][num] = 1;
	}
	return (res);
}
