#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char let[10][10]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int n;
	scanf("%d",&n);
	if(n>9){
		printf("Greater than 9");
	}
	else{
		printf("%s",let[n-1]);    
	}
	return 0;
}

