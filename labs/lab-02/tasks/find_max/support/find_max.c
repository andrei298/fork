// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "find_max.h"

void *find_max(void *arr, int n, size_t element_size,
				int (*compare)(const void *, const void *))
{
	void *max = arr;

	for(int i=0;i<n;i++) {
		void *curent = (char *)arr + i*element_size;

			if (compare(curent,max) > 0)
		max = curent;
	}

	return max;
}

int compare(const void *a, const void *b)
{
	
	if(*(int *)a > *(int *)b) return 1;
	else return 0;
}
