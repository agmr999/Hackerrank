#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n,sum=0,x,i;
	scanf("%d", &n);
	for(i=1;i<=5;i++)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}	
