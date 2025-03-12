// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "delete_first.h"

char *delete_first(char *s, char *pattern)
{
	for(int i=0;i<strlen(s)-strlen(pattern)+1;i++)
		if(s[i]==pattern[0]) {
			int ok=1;
			int nr=0;
			for(int j=i;j<strlen(pattern)+i;j++) {
				if(s[j]!=pattern[nr]) ok=0;
				nr++;
			}
			if(ok==1) {
				for(int k=i;k<strlen(s)-strlen(pattern)+1;k++)
				s[k]=s[k+strlen(pattern)];
				break;
			}
		}
	return s;
}
