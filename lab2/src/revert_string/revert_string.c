#include "revert_string.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{
	// your code here
char t;
int right=strlen(str)-1;
for(int left=0; left<=right; left++, right--){

t=str[left];
	str[left]=str[right];
	str[right]=t;

}	

}
