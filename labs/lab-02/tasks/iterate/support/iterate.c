// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "iterate.h"
#include "array.h"

void print_chars(void)
{
	unsigned char *vector = (unsigned char*) v;
	for(int i=0;i<=19;i++)
	printf("%p -> 0x%x\n", vector+i, *(vector+i));

	printf("-------------------------------\n");
}

void print_shorts(void)
{
	unsigned short *vector = (unsigned short*) v;
	for(int i=0;i<=9;i++)
	printf("%p -> 0x%x\n", vector+i, *(vector+i));

	printf("-------------------------------\n");
}

void print_ints(void)
{
	unsigned int *vector = (unsigned int*) v;
	for(int i=0;i<=4;i++)
	printf("%p -> 0x%x\n", vector+i, *(vector+i));

	printf("-------------------------------\n");
}
