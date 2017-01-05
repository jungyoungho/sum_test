#include "sum.h"

int sum(int n)
{
	int res = 0;
	int y=0;
	for(y=1; y<=n; y++)
	{
		res+=y;
	}
	return res;
}


