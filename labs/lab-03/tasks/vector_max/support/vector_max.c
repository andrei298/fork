// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "vector_max.h"

int vector_max(int *v, int len)
{
	int max;
	unsigned int i=0;

	max = v[0];
	
	cautare:

		if(i>=len) goto returnare;
		if(v[i]>max) goto modificare;
		goto schimbare;

	modificare:
		max=v[i];
		goto schimbare;

	schimbare:
		i++;
		goto cautare;

	returnare:
		return max;
}
