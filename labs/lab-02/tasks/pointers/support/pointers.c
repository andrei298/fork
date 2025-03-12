// SPDX-License-Identifier: BSD-3-Clause

#include <stddef.h>

#include "pointers.h"

int my_strcmp(const char *s1, const char *s2)
{
	int x=0;
	if(strlen(s1)<strlen(s2)) {
		for(int i=0;i<strlen(s1);i++) {
		if(s1[i]<s2[i]) {
			x=-1;
			break;
		}
		else if(s1[i]>s2[i]) {
			x=1;
			break;
		}
		if(x==0) x=-1;
		}
	}

	else if(strlen(s1)>strlen(s2)) {
		for(int i=0;i<strlen(s2);i++) {
			if(s1[i]<s2[i]) {
				x=-1;
				break;
			}
			else if(s1[i]>s2[i]) {
				x=1;
				break;
			}
			if(x==0) x=1;
		}
	}

	else {
		for(int i=0;i<strlen(s2);i++) {
			if(s1[i]<s2[i]) {
				x=-1;
				break;
			}
			else if(s1[i]>s2[i]) {
				x=1;
				break;
			}
		}
	}
	return x;
}


void *my_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char * d = (unsigned char *) dest;
	const unsigned char * s = (const unsigned char *) src;
	
	s = s+n;
	d = d+n;

	while(n--) {
		*(--d) = *(--s);
	}
	return dest;
}

char *my_strcpy(char *dest, const char *src)
{
	int i=0;
	while(*(src+i)!=0) {
		*(dest+i) = *(src+i);
		i++;
	}
	
	*(dest+i) = '\0';
	return dest;
}
