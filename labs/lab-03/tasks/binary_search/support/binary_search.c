// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "binary_search.h"

int binary_search(int *v, int len, int dest)
{
	int start = 0;
	int end = len - 1;
	int middle;

loop:
	middle = (start+end) / 2;

	if(start>end)
		goto nu_gaseste;

	if(v[middle] == dest)
		goto afisare;

	if(v[middle] < dest)
		goto modificare1;

	if(v[middle] > dest)
		goto modificare2;
	
modificare1:
	start = middle+1;
		goto loop;

modificare2:
	end = middle-1;
		goto loop;

	afisare:
		return middle;
	
	nu_gaseste:
		return -1;

}
